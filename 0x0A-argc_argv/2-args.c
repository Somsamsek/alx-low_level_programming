#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
