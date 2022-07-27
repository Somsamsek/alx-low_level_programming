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

	for (; str[count] != '\0'; count++)
	{
		if ((count % 2) == 0)
		{
			_putchar(str[count]);
		}
		else
			continue;
	}

	_putchar('\n');
}
