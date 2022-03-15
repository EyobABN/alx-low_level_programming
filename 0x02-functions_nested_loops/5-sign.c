#include "main.h"

/**
 * print_sign - prinis the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 if n is positive
 * returns 0 if n is zero
 * returns -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('+');
	return (-1);
}
