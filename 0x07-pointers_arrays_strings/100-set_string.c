#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: the pointer to be reset
 * @to: the value to be reset to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
