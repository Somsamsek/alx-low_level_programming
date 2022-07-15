#include <stdio.h>
#include "main.h"

/**
 * times_table - a function that prints the 9 times table, staring with 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int r, c;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			if (c == 9)
			{
				c *= r;
				_putchar(c);
			}
			else
			{
				c *= r;
				_putchar(c + ',');
				_putchar(' ');
			}

			_putchar('\n');
		}
	}
}
