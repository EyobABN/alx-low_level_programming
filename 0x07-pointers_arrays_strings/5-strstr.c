#include "main.h"

/**
 * *_strstr - locates a substring in a string
 * @haystack: the starting point of the string
 * @needle: the starting point of the substring to be searched for
 *
 * Return: a pointer to the first occurence if c is found, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int found;

	do {
		i = 0;
		found = 1;
		while (*(needle + i))
		{
			if (*(haystack + i) != *(needle + i))
				found = 0;
			i++;
		}
		if (found)
			return (haystack);
	} while (*haystack++);
	return (NULL);
}
