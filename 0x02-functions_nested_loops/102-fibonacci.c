#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers.
 *Return: 0.
 */

int main(void)
{
	int i;
	long fib;
	long a = 1;
	long b = 2;

	printf("%li, %li, ", a, b);

	for (i = 1; i <= 48; i++)
	{
		fib = a + b;
		if (i == 48)
		{
			printf("%li", fib);
		}
		else
		{
			printf("%li, ", fib);
		}
		a = b;
		b = fib;
	}
	printf("\n");

	return (0);
}
