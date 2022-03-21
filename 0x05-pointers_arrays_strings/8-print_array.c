#include <stdio.h>
#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: size of array a
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int first;

	first = 1;

	for (i = 0; i < n; i++)
	{
		if (first)
		{
			first = 0;
		}
		else
		{
			printf(", ");
		}
		printf("%d", *(a + i));
	}
	putchar('\n');
}
