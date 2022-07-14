#include <stdio.h>
#include "main.h"

/**
 * main - functions swaps the values of int a & b.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, b;
	int *pa, *pb;
	
	a = 98;
	b = 42;
	
	pa = &a;
	pb = &b;

	*pa = 42;
	*pb = 98;

	return (0);
}
