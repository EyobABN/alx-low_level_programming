#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the starting point of memory to be filled
 * @b: the value to be filled into the memory
 * @n: the number of bytes to be filled in the memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);

}
