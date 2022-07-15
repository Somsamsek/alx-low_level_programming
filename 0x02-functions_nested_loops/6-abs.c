#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value
 *
 * Returns: Always absolute value.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
