#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, n;
	const unsigned char *function_A = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if(n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x", *function_A++);
		if (i != n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
