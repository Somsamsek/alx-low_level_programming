#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a funtions that returns the lenght of a string
 * @s: input
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
