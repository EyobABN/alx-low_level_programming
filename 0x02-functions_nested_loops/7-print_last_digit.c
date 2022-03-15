#include "main.h"

/**
 * print_last_digit - prinis the sign of a number
 * @n: the number to be checked
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n >= 0)
	{
		_putchar('0' + last);
		return (last);
	}
	_putchar(-last + '0');
	return (-last);
}
