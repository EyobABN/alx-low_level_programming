#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: the number of bytes to be allocated
 *
 * Return:: a pointer to the allocated memory if successful,
 * causes normal process termination with a status value of 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
