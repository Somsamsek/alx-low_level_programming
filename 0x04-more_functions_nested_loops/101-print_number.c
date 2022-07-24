#include <stdio.h>
#include "main.h"

/**
 * print_number - a function that print an integer
 * @n: integer argument
 * Return: integer value
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double t_beg = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * (-1);
			_putchar('-');
		}

		while (t_beg <= positive)
			t_beg *= 10;

		tens = t_beg / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			postive = (postitive - (tens * digit));
			tens /= 10;
		}
	}
}
