#include "main.h"

/**
 * _puts_recursion - puts a string recursively
 * @s: pointer to the first element of the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
