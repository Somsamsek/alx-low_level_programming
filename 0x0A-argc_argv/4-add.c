#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
