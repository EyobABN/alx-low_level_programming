#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints numbers with the separator
 * @separator: the separator
 * @n: the number of integers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
