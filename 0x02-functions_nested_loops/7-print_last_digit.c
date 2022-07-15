#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - funtions prints last digit of a number
 * @n: integer argument
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int nl;

	nl = (n % 10);

	if (nl < 0)
		nl *= -1;

	_putchar(nl + '0');

	return (nl);
}
