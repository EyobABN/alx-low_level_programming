#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: the array to be searched
 * @size: size of array
 * @cmp: pointer to the comparing function
 *
 * Return: index of first element in array for which cmp does not return 0,
 * if no match, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
