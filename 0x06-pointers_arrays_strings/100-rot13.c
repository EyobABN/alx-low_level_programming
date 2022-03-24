#include "main.h"

/**
 * *rot13 - encodes a string with rot13
 * @c: pointer to first char of string
 *
 * Return: a pointer to first char of now modified string
 */
char *rot13(char *c)
{
	int i, j;
	int l[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int r[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D',
		'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	i = 0;

	while (*(c + i))
	{
		for (j = 0; j < 52; j++)
		{
			if (*(c + i) == l[j])
			{
				*(c + i) = r[j];
				break;
			}
		}
		i++;
	}
	return (c);
}
