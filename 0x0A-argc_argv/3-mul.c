#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 if the argc is the right number, 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
