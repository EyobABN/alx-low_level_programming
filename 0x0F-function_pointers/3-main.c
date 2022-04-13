#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - does simple operations on two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
	int (*r)(int, int);
	char opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opr = *argv[2];
	if (!(opr == '+' || opr == '-' || opr == '*' || opr == '/' || opr == '%') ||
			argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (opr == '/' || opr == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	r = get_op_func(argv[2]);

	printf("%d\n", r(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
