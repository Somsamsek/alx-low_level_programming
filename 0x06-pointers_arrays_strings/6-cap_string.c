#include <stdio.h>
#include "main.h"

/**
 * cap_string - a function that capitalises all words of a string
 * @n: pointer to input string
 * Return: capitalized string
 */

char *cap_string(char *n)
{
	int i, x, cap = 32;
	int separators[] = {' ', '\t', '\n', ',', ';', '.',
		 '!', '?', '"', '(', ')', '{', '}'};

	if ((n[0] >= 'a') && (n[0] <= 'z'))
		n[0] -= cap;

	for (i = 1; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 12; x++)
		{
			if (((n[i] >= 'a') && (n[i] <= 'z')) && (n[i - 1] == separators[x]))
				n[i] -= cap;
		}
	}

	return (n);
}
