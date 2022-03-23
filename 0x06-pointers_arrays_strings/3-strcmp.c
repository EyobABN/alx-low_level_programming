#include "main.h"

/**
 * *_strcmp - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -15, 0, 15 depending on the result
 */
int _strcmp(char *s1, char *s2)
{
	int s1n, s2n, res;

	s1n = 0;
	s2n = 0;

	while (*(s2 + s2n))
		s2n++;
	s2n++;
	while (*(s1 + s1n))
		s1n++;
	s1n++;
	if (s1n < s2n)
		res = -15;
	else if (s1n == s2n)
		res = 0;
	else
		res = 15;
	return (res);
}
