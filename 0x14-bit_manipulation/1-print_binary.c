#include "main.h"

/**
 * print_binary - prints the binary form of an unsigned long int
 * @n: the unsinged long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;
	int i, shift, digit, size, start = 0;

	size = sizeof(unsigned long int) * 8;

	for (i = 0; i < size; i++)
	{
		shift = size - 1 - i;
		digit = ((a << shift) & n) >> shift;
		if (!start && digit == 0 && i != size - 1)
			continue;
		if (!start && digit == 1)
			start = 1;
		_putchar(digit + '0');
	}
}
