#include <stdio.h>

/**
 * main - function that prints the first 98 fibonacci numbers
 * Return: 0.
 */

int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long fib;

	printf("%lu, %lu, ", a, b);

	for (i = 1; i <= 96; i++)
	{
		fib = a + b;

		if (i == 96)
			printf("%lu", fib);
		else
			printf("%lu, ", fib);
		a = b;
		b = fib;
	}

	printf("\n\n");

	return (0);
}
