#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int first;

	for (i = 0; i < 10; i++)
	{
		first = 1;
		for (j = 0; j < 10; j++)
		{
			if (first)
			{
				first = 0;
				_putchar('0' + ((i * j) % 10));
			} else
			{
				_putchar(',');
				_putchar(' ');
				if (i * j < 10)
				{
					_putchar(' ');
				} else
				{
					_putchar ('0' + ((i * j) / 10));
				}
				_putchar('0' + ((i * j) % 10));
			}
		}
		_putchar('\n');
	}
}
