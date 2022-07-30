#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: nuber of elements in array
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;


		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
