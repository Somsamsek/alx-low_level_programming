#include <stdio.h>
#include "main.h"

/**
 * main - pointer function to update the value of variable.
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int n;
	int *pn;

	n = 402;
	pn = &n;

	*pn = 98;

	return (0);

}
