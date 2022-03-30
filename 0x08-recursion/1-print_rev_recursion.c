#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: pointer to the first element of the string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (*(s + 1) == '\0')
	{
		_putchar(*s);
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
