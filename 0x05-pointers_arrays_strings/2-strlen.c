#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that counts the length of a string
 * @s: literal sring pointer
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}

	return (sum);
}
