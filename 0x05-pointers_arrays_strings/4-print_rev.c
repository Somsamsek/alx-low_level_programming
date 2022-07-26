#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that print a string in reverse
 * @s: input string
 * Return: inout string in reverse
 */

void print_rev(char *s)
{
	int count = 0, i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (n = --count; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
