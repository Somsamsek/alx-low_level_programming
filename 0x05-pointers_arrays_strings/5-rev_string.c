#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string input
 * Return: reversed string
 */

void rev_string(char *s)
{
	int count, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	for (count = 0; count <= len; len--)
	{
		_putchar(s[len]);
	}
}
