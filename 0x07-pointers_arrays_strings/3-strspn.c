#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched in
 * @accept: the substring to be searched for
 *
 * Return: number of bytes in the initial segment in s that
 * consist entirely of chars from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;
	int init, contains;

	count = 0;
	init = 0;
	i = 0;
	while (*(s + i))
	{
		j = 0;
		contains = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				if (!init)
					init = 1;
				contains = 1;
				count++;
			}
			j++;
		}
		if (init && !contains)
			break;
		i++;
	}

	return (count);
}
