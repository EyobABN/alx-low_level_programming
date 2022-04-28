#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: a pointer to the binary string
 *
 * Return: the unsigned int if successful, 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, count = 0, num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		count++;
	}
	for (i = 0; i < count; i++)
	{
		num = num << 1;
		if (b[i] == '1')
			num++;
	}

	return (num);
}
