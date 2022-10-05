#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for integer
 * @array: pointer to array to be looped through
 * @size: size of array
 * @cmp: funtion pointer to function to be executed
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returns true */
			return (i);

	return (-1);
}
