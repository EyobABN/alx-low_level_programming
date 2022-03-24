#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @c: pointer to first char of string
 *
 * Return: a pointer to first char of now modified string
 */
char *leet(char *c)
{
	int i, j;
	int l[11];
	int n[6] = {4, 3, 0, 7, 1};

	l[0] = 'a';
	l[1] = 'A';
	l[2] = 'e';
	l[3] = 'E';
	l[4] = 'o';
	l[5] = 'O';
	l[6] = 't';
	l[7] = 'T';
	l[8] = 'l';
	l[9] = 'L';
	i = 0;

	while (*(c + i))
	{
		for (j = 0; j < 10; j++)
		{
			if (*(c + i) == l[j])
				*(c + i) = n[j / 2] + '0';
		}
		i++;
	}
	return (c);
}
