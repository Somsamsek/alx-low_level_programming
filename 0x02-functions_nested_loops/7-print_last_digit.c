#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - funtions prints last digit of a number
 * @n: integer argument
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar(n % 10);

	return (n % 10);
}
