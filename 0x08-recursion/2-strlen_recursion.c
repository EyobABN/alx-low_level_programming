#include "main.h"

/**
 * _strlen_recursion - returns the length of a string calculated recursively
 * @s: pointer to the first element of the string
 *
 * Return: void
 */
int _strlen_recursion(char *s)
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
		return (n + _strlen_recursion(s + 1));
	}
}
