#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a function that prints a traingle using #
 * @size: number of # characters
 * Return: triangle
 */

void print_triangle(int size)
{
	int space, row, count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = row; space < size; space++)
				_putchar(' ');

			count = 0;

			do {
				_putchar('#');

				count++;
			} while (count < row);

			_putchar('\n');
		}
	}
}
