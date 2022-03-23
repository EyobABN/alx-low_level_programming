#include "main.h"

/**
 * *_strncpy - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: max bytes to be used from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
