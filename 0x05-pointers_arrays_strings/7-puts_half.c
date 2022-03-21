#include "main.h"

/**
 * puts_half - prints a string
 * @str: first character of the string whose length is to be counted
 *
 * Return: the lenght of the string
 */
void puts_half(char *str)
{
	int count;
	int i;
	int n;

	count = 0;
	while (*(str + count))
	{
		count++;
	}
	if (count % 2 == 0)
	{
		n = count / 2;
	}
	else
	{
		n = (count / 2) + 1;
	}
	for (i = n; i < count; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
