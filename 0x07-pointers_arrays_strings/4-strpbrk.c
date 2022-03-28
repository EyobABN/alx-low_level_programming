#include "main.h"

/**
 * *_strpbrk - locates a char in a string
 * @s: the starting point of the string
 * @accept: the starting point of the substring to be searched for
 *
 * Return: a pointer to the first occurence if c is found, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	do {
		i = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
			return (s);
			i++;
		}
	} while (*s++);
	return (NULL);
}
