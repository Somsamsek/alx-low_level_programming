#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers.
 *Return: 0.
 */

int main(void)
{
	int i;
	int count_to = 50;
	long a = 1;
	long b = 2;

	for (i = 1; i <= (count_to / 2); i++)
	{
		printf("%li %li", a, b);
		a += b;
		b += a;
	}
	if ((count_to % 2) == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
