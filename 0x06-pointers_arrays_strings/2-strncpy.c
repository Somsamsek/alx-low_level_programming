#include <stdio.h>
#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: copy string  to
 * @src: copy string from
 * @n: max number of bytes/characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
