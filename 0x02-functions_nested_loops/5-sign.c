#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that checks the sign of a number
 * @n: number input
 * Return: 1 if number is +ve, -1 if -ve, 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

