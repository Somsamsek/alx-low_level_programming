#include <stdio.h>
#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @src: string to copy from
 * @dest: string to copy to
 * @n: max number of bytes to be used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, n_count;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n_count = 0; n_count < n; n_count++)
	{
		dest[i + n_count] = src[n_count];

		if (src[n_count] == '\0')
		{
			n_count = n;
		}
	}

	return (dest);
}
