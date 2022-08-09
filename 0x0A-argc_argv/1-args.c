#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments
 * @argc: number of argument passed
 * @argv: array holding strings passed
 * Return: 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
