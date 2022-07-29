#include <stdio.h>
#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @src: string to copy from
 * @dest: string to copy to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; (dest[i + n] = src[n]) != '\0'; n++)
	{
	}

	dest[i + n] = '\0';

	return (dest);
}
