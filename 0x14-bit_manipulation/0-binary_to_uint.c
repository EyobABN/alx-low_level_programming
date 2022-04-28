#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: a pointer to the binary string
 *
 * Return: the unsigned int if successful, 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, count, j, acc, base = 2, power = 0;
	int i;

	if (b == NULL)
		return (0);
	count = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		count++;
	}
	num = 0;
	for (i = count - 1; i >= 0; i--)
	{
		acc = 1;
		for (j = 0; j < power; j++)
			acc *= base;
		num += (b[i] - '0') * acc;
		power++;
	}
	return (num);
}
