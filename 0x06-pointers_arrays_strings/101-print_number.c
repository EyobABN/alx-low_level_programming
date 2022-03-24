#include "main.h"

/**
 * print_number - prints an integer recursively using _putchar
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, cpy, digit, power;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	cpy = n;
	digit = 1;
	while (cpy / 10 > 0)
	{
		cpy = cpy / 10;
		digit++;
	}
	power = 1;
	for (i = 0; i < digit - 1; i++)
		power = power * 10;
	for (i = 0; i < digit; i++)
	{
		_putchar((n / power) + '0');
		n = n % power;
		power = power / 10;
	}
}
