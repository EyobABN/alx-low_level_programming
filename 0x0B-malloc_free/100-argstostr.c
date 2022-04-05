#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: pointer to a new concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, letter_count;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	letter_count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			letter_count++;
		letter_count++;
	}

	str = malloc(sizeof(char) * (letter_count + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k + 1] = '\0';
	return (str);
}
