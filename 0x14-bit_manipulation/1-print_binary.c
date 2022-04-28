#include "main.h"

/**
 * print_binary - prints the binary form of an unsigned long int
 * @n: the unsinged long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned int arr[sizeof(unsigned long int) * 8];
	int i, start = 0;

	for (i = size - 1; i >= 0; i--)
	{
		arr[i] = n & 1;
		n = n >> 1;
	}
	for (i = 0; i < size; i++)
	{
		if (!start && arr[i] == 0 && i != size - 1)
			continue;
		if (!start && arr[i] == 1)
			start = 1;
		_putchar(arr[i] + '0');
	}
}
