#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNumber - checks if a string is a number
 * @s: the string
 *
 * Return: 1 if string, 0 if not
 */
int __attribute__ ((unused)) isNumber(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}
/**
 * print_numbers - prints numbers with the separator
 * @separator: the separator
 * @n: the number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
