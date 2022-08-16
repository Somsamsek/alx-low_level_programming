#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a function that prints the name of a file it was compiled from
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
