#include "main.h"

/**
 * *cap_string - to uppercase every word's starting letter
 * @c: first char
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *c)
{
	int count, i, j, chr, t;
	int s[14];

	count = 0;
	t = 0;
	s[0] = ' ';
	s[1] = '\t';
	s[2] = '\n';
	s[3] = ',';
	s[4] = ';';
	s[5] = '.';
	s[6] = '!';
	s[7] = '?';
	s[8] = '"';
	s[9] = '(';
	s[10] = ')';
	s[11] = '{';
	s[12] = '}';

	while (*(c + count))
		count++;
	for (i = 0; i <= count; i++)
	{
		chr = (int) *(c + i);
		for (j = 0; j < 14; j++)
		{
			if (i == 0 || *(c + i - 1) == s[j])
				t = 1;
		}
		if (t && chr >= 97 && chr <= 122)
			*(c + i) -= 32;
		t = 0;
	}
	return (c);
}
