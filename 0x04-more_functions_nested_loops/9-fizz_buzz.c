#include <stdio.h>

/**
 * main - print Fizz buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int first = 1;

	for (i = 1; i < 101; i++)
	{
		if (first)
		{
			first = 0;
		}
		else
		{
			putchar(' ');
		}
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (!(i % 3 == 0) && i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
	}
	putchar('\n');
	return (0);
}
