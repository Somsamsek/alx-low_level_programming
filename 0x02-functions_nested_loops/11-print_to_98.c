#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints from n to 98.
 * @n: integer argument.
 * Return: void.
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	if (n == 98)
	{
		printf("%d", n);
	}

	printf("\n");
}
