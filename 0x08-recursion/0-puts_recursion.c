#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function like puts
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
