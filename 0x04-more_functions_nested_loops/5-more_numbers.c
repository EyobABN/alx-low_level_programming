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


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + j);
		}
		for (j = 0; j < 5; j++)
		{
			_putchar('0' + 1);
			_putchar('0' + j);
		}
		_putchar('\n');

	}
}
