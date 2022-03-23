#include "main.h"

/**
 * reverse_array - concatenates two strings
 * @a: array to be reversed
 * @n: nuber of elements of the array
 *
 * Return: a pointer to the resulting string dest
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
