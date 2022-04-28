#include "main.h"

/**
 * clear_bit - sets the bit at the index to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit, size;
	unsigned long int a = 1;

	size = sizeof(unsigned long int) * 8;
	if (index >= size)
		return (-1);
	bit = ~(a << index);
	*n = *n & bit;
	return (1);
}
