#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints chessboard
 * @a: the number of rows of the board
 * @size: size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int l, r, suml, sumr;

	l = 0;
	suml = 0;
	while (l < size * size)
	{
		suml += *(a + l);
		l += size + 1;
	}

	r = size - 1;
	sumr = 0;
	while (r < size * size - 1)
	{
		sumr += *(a + r);
		r += size - 1;
	}

	printf("%d, %d\n", suml, sumr);
}
