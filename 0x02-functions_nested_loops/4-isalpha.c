#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if c is an alphabet.
 * otherwise, returns 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
