#include "main.h"

/**
 * _puts - prints a string
 * @str: first character of the string whose length is to be counted
 *
 * Return: the lenght of the string
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
