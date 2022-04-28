#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: the number
 * @index: the index
 *
 * Return: the bit, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, size;
	unsigned long int a = 1;

	size = sizeof(unsigned long int) * 8;
	if (index >= size)
		return (-1);
	bit = ((a << index) & n) >> index;
	return (bit);
}
