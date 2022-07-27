#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints a character of a string followed by a new line
 * @str: string input
 * Return: even indexed characters
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);

		count += 2;
	}
}
