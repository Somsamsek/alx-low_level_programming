#include <stdio.c>
#include "main.h"

/**
 * more_numbers - a function that print 10 times numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, count;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + (i / 10));

			if (i >= 10)
			{
				_putchar('0' + (i % 10))
			}
		}

		_putchar('\n');
	}
}
