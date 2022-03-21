#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: first character of the string whose length is to be counted
 *
 * Return: the lenght of the string
 **/
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * rev_string - reverses a string
 * @s: first character of the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count;
	int cnt;
	char r[1000];

	count = _strlen(s);

	cnt = 0;
	while (count > 0)
	{
		*(r + cnt) = *(s + count - 1);
		count--;
		cnt++;
	}
	*(r + cnt) = '\n';

	count = 0;
	while (*(s + count) != '\0')
	{
		*(s + count) = *(r + count);
		count++;
	}
}
