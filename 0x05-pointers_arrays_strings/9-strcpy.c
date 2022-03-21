#include "main.h"

/**
 * *_strcpy - copies string from src to dest
 * @src: the pointer to the string to be copied
 * @dest: the destination
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (*(src + count))
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}
