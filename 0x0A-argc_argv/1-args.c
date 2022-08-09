#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments
 * @argc: number of argument passed
 * @argv: array holding strings passed
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 0)
		printf("0");
	else
		printf("%d\n", argc);

	return (0);
}
