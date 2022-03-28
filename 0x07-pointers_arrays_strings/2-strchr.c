#include "main.h"

/**
 * *_strchr - lovates a char in a string
 * @s: the starting point of the string
 * @c: the character to be searched for
 *
 * Return: a pointer to the first occurence if c is found, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
