#include "variadic_functions.h"
#include <stdarg.h>

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

	if (n <= 0)
		return;
	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
			printf("%s", separator);
		if (i == n - 1)
			putchar('\n');
	}
	va_end(ap);
}
