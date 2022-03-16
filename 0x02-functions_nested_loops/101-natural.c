#include <stdio.h>
#include <stdlib.h>


/**
 * natural - prints the sum of all multiples of 3 and 5 below 1024
 *
 * Return: void
 */
void natural(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

}

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	natural();
	return (0);
}
