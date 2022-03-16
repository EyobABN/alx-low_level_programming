#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the length of the table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, first;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			first = 1;
			for (j = 0; j <= n; j++)
			{
				if (first)
				{
					first = 0;
					_putchar('0' + ((i * j) % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					if (i * j < 100)
					{
						_putchar(' ');
					} else
					{
						_putchar('0' + ((i * j) / 100));
						_putchar('0' + (((i * j) / 10) - 10));
					}
					if (i * j < 10)
					{
						_putchar(' ');
					} else if (i * j >= 10 && i * j < 100)
					{
						_putchar('0' + ((i * j) / 10));
					}
					_putchar('0' + ((i * j) % 10));
				}
			}
			_putchar('\n');
		}
	}
}
