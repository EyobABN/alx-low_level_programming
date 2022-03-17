#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 9,
 * except 2 and 4
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		l = 11;
		for (j = 0; j < 20; j++)
		{
			if (j < 10)
			{
				k = j;
			}
			else if (j % 2 == 0)
			{
				k = 1;
			} else
			{
				k = j - l++;
			}

			_putchar('0' + k);
		}
		_putchar('\n');

	}
}
