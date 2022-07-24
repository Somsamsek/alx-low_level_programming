#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - pointer function to update the value of variable.
 * @*n: pointer
 * @n: pointer variable
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int pn;

	pn = 402;
	n = &pn;

	*n = 98;
}
