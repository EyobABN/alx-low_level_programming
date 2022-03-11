#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;
	int j;
	int first;

	first = 1;
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				if (first)
				{
					first = 0;
				} else
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (0);
}
