#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * factorize - factorizes
 * @n: the number to be factorized
 *
 * Return: Always 0.
 */
void factorize(long n)
{
	int count = 0;
	long max = 0;
	long i;

	while (!(n % 2))
	{
		n = n / 2;
		count++;
	}

	if (count)
/*		printf("2 %d\n", count); */
		max = 2;
/*		printf("Largest prime factor: %lld\n", max); */

	for (i = 3; i <= sqrt(n); i += 2)
	{
		count = 0;
		while (n % i == 0)
		{
			count++;
			n = n / i;
		}
		if (count)
/*			printf("%lld %d\n", i, count); */
			if (n > max)
				max = n;
	}

	if (n > 2)
/*		printf("%lld 1\n", n); */
	printf("%ld\n", n);
}


/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long n = 152488797;

	factorize(n);
	return (0);
}

