#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - function that iterates over another funtion
 * @array: pointer array/entry point to array
 * @size: size of array
 * @action: function poinnter to function to be executed
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
