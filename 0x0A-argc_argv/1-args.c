#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array of argument strings
 *
 * Return: always 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
