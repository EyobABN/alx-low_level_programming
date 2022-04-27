#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 if successful, 1 if not.
 */
int main(void)
{
	int i = 2772, n = 0, sum = 0;

	srand(time(0));
	while (i > 0)
	{
		n = (rand() % (126 - 32 + 1)) + 32;
		if (i - n > 0)
		{
			printf("%c", n);
			sum += n;
			i -= n;
		}
		else
		{
			printf("%c", i);
			sum += i;
			i -= i;
		}
	}
	return (0);
}
