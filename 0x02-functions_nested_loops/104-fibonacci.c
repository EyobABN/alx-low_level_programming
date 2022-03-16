#include <stdio.h>

/**
 * fibonacci - prints the fibonacci series upto a point
 * Return: void
 */
void fibonacci(void)
{
	int i;
	long a = 1;
	long b = 2;
	long c;
	int first = 1;

	for (i = 0; i < 98; i++)
	{
		if (first)
		{
			first = 0;
		}
		else
		{
			printf(", ");
		}
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
}

/**
 * main - entry point
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();
	return (0);
}
