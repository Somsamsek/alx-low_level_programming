#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that prints a starightline in the terminal
 * @n: number of times to print _ on the terminal
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
