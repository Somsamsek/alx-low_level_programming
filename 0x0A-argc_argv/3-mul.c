#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a function that multiplies two integers
 * @argc: argument count
 * @argv:  argument vector array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
