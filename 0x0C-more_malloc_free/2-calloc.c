#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array
 * @nmemb: number of units
 * @size: size of one unit
 *
 * Return: pointer to the allocated memory if successful, NULL if not
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
