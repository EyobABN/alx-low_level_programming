#include <stdio.h>

/**
 * fibonacci - prints the fibonacci series upto a point
 * @n: the upto point
 * Return: void
 */
void fibonacci(int n)
{
	int i;
	long a = 1;
	long b = 2;
	long c;
	int first = 1;

	for (i = 0; i < n; i++)
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
	fibonacci(50);
	return (0);
}
