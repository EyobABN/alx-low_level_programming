#include "main.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars and initializes to c
 * @size: number of elements in the array
 * @c: the initializing character
 *
 * Return: pointer to first char of array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
