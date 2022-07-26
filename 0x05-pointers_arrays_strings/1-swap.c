#include <stdio.h>
#include "main.h"

/**
 * swap_int - functions swaps the values of int a & b.
 * @a: integer argument a
 * @b: integer argument b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
