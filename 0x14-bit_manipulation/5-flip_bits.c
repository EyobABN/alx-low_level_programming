#include "main.h"

/**
 * flip_bits - returns the number of bits neeeding flipping
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needing flipping
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size, i, flips = 0;
	unsigned long int bit1, bit2, a = 1;

	size = sizeof(unsigned long int) * 8;
	for (i = 0; i < size; i++)
	{
		bit1 = n & (a << i);
		bit2 = m & (a << i);
		if (bit1 == bit2)
			continue;
		flips++;
	}
	return (flips);
}
