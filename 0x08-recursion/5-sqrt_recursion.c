#include <stdio.h>
#include "main.h"

/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */

int squareroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (squareroot(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square of a number
 * @n: input
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squareroot(n, 0));
}
