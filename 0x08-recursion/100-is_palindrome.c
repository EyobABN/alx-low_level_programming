#include "main.h"

/**
 * _strlen - returns the length of a string calculated recursively
 * @s: pointer to the first element of the string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n++;
		return (n + _strlen(s + 1));
	}
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 - 1, s2 + 1));
	return (0);
}

/**
 * is_palindrome - checks if palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen(s);
	if (*s == '\0')
		return (1);
	if (l % 2 == 0)
		return (wildcmp(s + (l / 2) - 1, s + (l / 2)));
	return (wildcmp(s + (l / 2) - 1, s + (l / 2) + 1));
}
