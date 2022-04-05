#include "main.h"
#include <stdlib.h>
/**
 * add - adds two numbers in strings
 * @sum: the sum
 * @n1: n1
 * @n2: n2
 * @i: i
 * @j: j
 * @k: k
 * @size_r: size_r
 *
 * Return: sum if successful, 0 if not
 */
char *add(char *sum, char *n1, char *n2, int i, int j, int k, int size_r)
{
	int a, b, c, d;

	k = size_r - 2;
	d = 0;
	while (i >= -1 || j >= -1)
	{
		if (k < 0)
			return (0);
		if (i < 0)
			a = 0;
		else
			a = n1[i] - '0';
		if (j < 0)
			b = 0;
		else
			b = n2[j] - '0';
		c = (a + b + d) % 10;

		if (a + b + d < 10)
		{
			sum[k] = ((sum[k] - '0') + (a + b + d)) + '0';
			d = 0;
		}
		else
		{
			sum[k] = ((sum[k] - '0') + c) + '0';
			d = 1;
		}
		i--;
		j--;
		k--;
	}
	sum[size_r - 1] = '\0';
	while (*sum - '0' == 0)
		sum++;
	return (sum);
}

/**
 * infinite_add - adds two strings containing numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer for the sum
 * @size_r: size of the buffer
 *
 * Return: pointer to the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *sum;
	int i, j, k, size1, size2;

	sum = r;
	size1 = 0;
	size2 = 0;
	for (i = 0; n1[i] != '\0'; i++)
		size1++;
	for (i = 0; n2[i] != '\0'; i++)
		size2++;
	i = size1 - 1;
	j = size2 - 1;
	for (k = 0; k < size_r; k++)
		sum[k] = 0 + '0';
	return (add(sum, n1, n2, i, j, k, size_r));
}
