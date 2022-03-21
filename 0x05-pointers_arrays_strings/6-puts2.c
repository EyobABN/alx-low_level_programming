#include "main.h"

/**
 * puts2 - prints a string
 * @str: first character of the string whose length is to be counted
 *
 * Return: the lenght of the string
 */
void puts2(char *str)
{
	int count;
	int skip;

	count = 0;
	skip = 0;
	while (*(str + count))
	{
		if (!skip)
			_putchar(*(str + count));
		count++;
		skip = !skip;
	}
	_putchar('\n');
}
