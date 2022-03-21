#include "main.h"

/**
 * swap_int- swaps two ints
 * @a: int to be swapped
 * @b: the other int to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
