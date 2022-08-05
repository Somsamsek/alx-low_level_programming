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
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
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
	else
		return (squareroot(n, (n + 1) / 2));
}
