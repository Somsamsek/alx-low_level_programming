#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value
 *
 * Returns: Always 0.
 */

int _abs(int)
{
	int n;

	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
		return (n);

	return (0);
}
