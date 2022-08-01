#include <stdio.h>
#include "main.h"

/**
 * rot13 - Entry point
 * One IF statement, two loops only
 * @n: string pointer
 * Return: encrypted string
 */

char *rot13(char *n)
{
	int x, rot_c = 13, i = 0;
	char to_swap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S',
		'f', 's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V',
		'i', 'v', 'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y',
		'l', 'y', 'M', 'Z', 'm', 'z'};

	while (n[i] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (n[i] == to_swap[x])
			{
				n[i] = n[i] + rot_c;
				x =  51;
			}

			rot_c = rot_c * (-1);
		}
		i++;
	}

	return (n);
}
