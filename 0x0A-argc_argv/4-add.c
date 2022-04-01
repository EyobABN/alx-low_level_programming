#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * isnumber - checks if a string is a number
 * @s: pointer to first char
 *
 * Return: 1 if string is a number, 0 if not
 */
int isnumber(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (!(isdigit(*(s + i))))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 if the argc is the right number, 1 if not
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
