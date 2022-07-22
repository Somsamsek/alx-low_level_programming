#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that prints a diagonal on the terminal
 * @n: number of times \ is printed
 * Return: void
 */

void print_diagonal(int n)
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
			if (i == 1)
			{
				_putchar('\\');
			}
			else
			{
				int space;

				for (space = 1; space <= i; space++)
				{
					_putchar(' ');
				}

				_putchar('\\');
			}
		}

		_putchar('\n');
	}
}
