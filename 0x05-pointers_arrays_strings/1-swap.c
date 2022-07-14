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

	printf("These are the original values. a is: %d & b is: %d\n", a, b);

	pa = &a;
	pb = &b;

	printf("These are the addresses. pa is: %p & pb is: %p\n", pa, pb);

	*pa = 42;
	*pb = 98;
	printf("These are the swapped values. a is: %d & b is: %d\n.", a, b);

	return (0);
}
