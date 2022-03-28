#include "main.h"

/**
 * *_memcpy - copies memory area
 * @src: the source to copied
 * @dest: the destination
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
