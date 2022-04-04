#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * strtow - splits a string into words
 * @str: the string to be split into words
 *
 * Return: a pointer to an array of the split words
 */
char **strtow(char *str)
{
	int i, j, k, current_word, words, letter_count, strlen;
	char **arr;

	words = 0;
	i = 0;
	while (str[i])
	{
		if ((i == 0 && str[i] != ' ') || (str[i - 1] == ' ' && str[i] != ' '))
			words++;
		i++;
	}
	strlen = i;
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	current_word = -1;
	for (i = 0; i < strlen; i++)
	{
		if ((i == 0 && str[i] != ' ') || (str[i - 1] == ' ' && str[i] != ' '))
		{
			current_word++;
			letter_count = 0;
			for (j = i; !isspace(str[j]); j++)
			{
				if (str[j] == '\0')
					break;
				letter_count++;
			}
			arr[current_word] = (char *)malloc(sizeof(char) * letter_count);
			if (arr[current_word] == NULL)
				return (NULL);
			for (k = i; k < i + letter_count; k++)
				arr[current_word][k - i] = str[k];
			arr[current_word][letter_count] = '\0';
		}
	}
	arr[words] = NULL;

	return (arr);
}
