#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: max bytes to be used from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srcn, destn;
	int i;

	srcn = 0;
	destn = 0;

	while (*(dest + destn))
		destn++;
	while (*(src + srcn))
		srcn++;
	for (i = destn; i <= (destn + srcn); i++)
	{
		if (i > (destn - 1) + n)
			break;
		*(dest + i) = *(src + (i - destn));
	}
	return (dest);
}
