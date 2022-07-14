#include <stdio.h>
#include "main.h"

/**
 * main - pointer function to update the value of variable.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, *pn;

	n = 402;
	pn = &n;

	*pn = 98;

	return (0);

}
