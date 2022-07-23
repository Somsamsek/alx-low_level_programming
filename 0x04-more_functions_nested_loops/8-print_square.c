#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the size of the square
 * Return: square of size (size)
 */

void print_square(int size)
{
	int i, r;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
