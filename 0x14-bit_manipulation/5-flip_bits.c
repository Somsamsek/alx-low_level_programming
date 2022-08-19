#include <stdio.h>
#include "main.h"


/**
 * flip_bits - determine how many bit to flip to get from one num to another
 * @n: num
 * @m: num 2
 * Return: how many bits differ
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* XOR bith nums to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallyin the ones up */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while (difference > 0);

	return (diff_bits);
}
