#include <stdio.h>
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @src: string to copy from
 * @dest: string to copy to
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
