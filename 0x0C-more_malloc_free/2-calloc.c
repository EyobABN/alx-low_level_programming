#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates a memory for an array
 * @nmemb: number of units
 * @size: size of one unit
 *
 * Return: pointer to the allocated memory if successful, NULL if not
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	memset(arr, 0, size * nmemb);
	return (arr);
}
