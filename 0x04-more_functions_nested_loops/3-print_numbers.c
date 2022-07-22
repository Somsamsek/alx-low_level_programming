#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a function that prints numbers 0 - 9
 * Return: 0 Always
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');

	return (0);
}
