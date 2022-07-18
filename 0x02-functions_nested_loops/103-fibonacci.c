#include <stdio.h>

/**
 * main - prints the sum of the even valued terms in fibonacci sequence.
 * Return: 0.
 */

int main(void)
{
	long sum;
	long fib;
	long a = 1;
	long b = 2;

	do
	{
		fib = a + b;

		if ((fib % 2) == 0)
		{
			sum += fib;
		}
		
		a = b;
		b = fib;
	}
	while (fib < 4000000);

	printf("%li\n", sum);

	return (0);
}
