#include <stdio.h>
#include "main.h"

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char text[] = "_putchar\n";

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
