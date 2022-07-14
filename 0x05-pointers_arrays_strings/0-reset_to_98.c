#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - pointer function to update the value of variable.
 *
 * Return: Always 0.
 */

void reset_to_98(void)
{
	int pn;
	int *n;

	pn = 402;
	n = &pn;

	*n = 98;

	return (void);

}
