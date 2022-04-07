#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates a string with upto n bytes of another string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2 to be concatenated with s1
 *
 * Return: pointer to newly created string, NULL if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, count1, count2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count1 = 0;
	count2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	if (n >= count2)
		n = count2;
	str = malloc(sizeof(char) * (count1 + count2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < count1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[i + count1] = s2[i];
	str[i + n] = '\0';
	return (str);
}
