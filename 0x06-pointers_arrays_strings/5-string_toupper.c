#include "main.h"

/**
 * *string_toupper - to uppercase
 * @c: first char
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *c)
{
	int count, i, chr;

	count = 0;

	while (*(c + count))
		count++;
	for (i = 0; i <= count; i++)
	{
		chr = (int) *(c + i);
		if (chr >= 97 && chr <= 122)
			*(c + i) -= 32;
	}
	return (c);
}
