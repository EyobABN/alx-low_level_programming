#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *arr, *str1, *str2;

	if (s1 == NULL)
		str1 = "";
	else
		str1 = s1;
	if (s2 == NULL)
		str2 = "";
	else
		str2 = s2;

	size1 = 0;
	size2 = 0;
	i = 0;
	while (str1[i])
	{
		size1++;
		i++;
	}
	i = 0;
	while (str2[i])
	{
		size2++;
		i++;
	}

	arr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		arr[i] = str1[i];
	for (; i < size1 + size2; i++)
		arr[i] = *str2++;
	arr[i] = '\0';
	return (arr);
}
