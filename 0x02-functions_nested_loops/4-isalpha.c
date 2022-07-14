#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a function that checks for uppercase letters
 * @c: single letter input
 * Return: 1 if int c is letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if (( 'a' <= c <= 'z') || ( 'A' <= c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
