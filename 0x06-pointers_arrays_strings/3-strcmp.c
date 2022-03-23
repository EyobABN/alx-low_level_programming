#include "main.h"

/**
 * *_strcmp - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -15, 0, 15 depending on the result
 */
int _strcmp(char *s1, char *s2)
{
	char c1, c2;

	do {
		c1 = (char) *s1++;
		c2 = (char) *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);
		return (c1 - c2);
}
