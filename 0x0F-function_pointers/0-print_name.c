#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name from a function poinnter
 * @name: name to bee printed
 * @f: function pointer to function to execute
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
