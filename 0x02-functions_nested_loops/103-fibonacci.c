#include <stdio.h>

/**
 * fibonacci - prints the fibonacci series until terms exceed 4m
 * Return: void
 */
void fibonacci(void)
{
	long a = 1;
	long b = 2;
	long c;
	long sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
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
