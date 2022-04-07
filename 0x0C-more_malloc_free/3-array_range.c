#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start
 * @max: end
 *
 * Return: pointer to min if successful, NULL if not
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		arr[i] = i + min;
	return (arr);
}

