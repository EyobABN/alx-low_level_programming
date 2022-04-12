#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: starting point of buffer
 * @size: amount of bytes to be printes
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		if (!(i % 10) && i)
			printf("\n");
		if (i % 10 == 0)
		{
			if (i < size)
				printf("%08x: ", i);
			for (j = 0; j < 10; j += 2)
			{
				if (i + j < size)
					printf("%02x", b[i + j]);
				else
					printf("  ");
				if (i + j + 1 < size)
					printf("%02x", b[i + j + 1]);
				else
					printf("  ");
				printf(" ");
			}
			if (isprint(*(b + i)))
				putchar(*(b + i));
			else
				putchar('.');
		}
		else
		{
			if (isprint(*(b + i)))
				putchar(*(b + i));
			else
				putchar('.');
		}
		i++;
	}
	printf("\n");
}
