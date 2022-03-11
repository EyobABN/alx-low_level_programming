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
	int k;
	int l;
	int first;

	first = 1;
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (10 * i + j < 10 * k + l)
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
					putchar(' ');
					putchar(k);
					putchar(l);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
