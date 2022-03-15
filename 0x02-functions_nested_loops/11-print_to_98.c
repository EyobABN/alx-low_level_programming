#include "main.h"


/**
 * print_to_98 - prints the integer from n to 98
 * @n: integer to be printed
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;
	int first;

	if (n < 98)
	{
		first = 1;
		for (i = n; i <= 98; i++)
		{
			if (first)
			{
				first = 0;
			} else
			{
				_putchar(',');
				_putchar(' ');
			}
			printnumber(i);
		}
		_putchar('\n');
	} else if (n > 98)
	{
		first = 1;
		for (i = n; i >= 98; i--)
		{
			if (first)
			{
				first = 0;
			} else
			{
				_putchar(',');
				_putchar(' ');
			}
			printnumber(i);
		}
		_putchar('\n');
	} else
	{
		printnumber(98);
		_putchar('\n');
	}
}

/**
 * printnumber - prints an integer recursively using _putchar
 * @n: the integer to be printed
 *
 * Return: nothing
 */
void printnumber(int n)
{
	if (n == 0)
	{
		_putchar('0');
	} else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n == 0)
			_putchar('0');

		if (n / 10)
			printnumber(n / 10);

		_putchar(n % 10 + '0');
	}
}
