#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything with the separator
 * @format: the string containing the types of the args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					format[i] == 'i' ||
					format[i] == 'f' ||
					format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(ap);
	putchar('\n');
}
