#include "main.h"

/**
 * *_strchr - locates a char in a string
 * @s: the starting point of the string
 * @c: the character to be searched for
 *
 * Return: a pointer to the first occurence if c is found, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
