#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * isnumber - checks if a string is a number
 * @s: pointer to first char
 *
 * Return: 1 if string is a number, 0 if not
 */
int isnumber(char *s)
{
	int i;

	if (*s == '-')
		s++;
	if (*s == '\0')
		return (0);
	i = 0;
	while (*(s + i))
	{
		if (!(isdigit(*(s + i))))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array of argument strings
 *
 * Return: 0 if the argc is the right number, 1 if not
 */
int main(int argc, char *argv[])
{
	int __attribute__ ((unused)) i, cents, coins;

	if (argc != 2 || (argc == 2 && !(isnumber(argv[1]))))
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] == '-')
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);
	coins = 0;

	while (cents)
	{
		if (cents % 25)
		{
			if (cents % 10)
			{
				if (cents % 5)
				{
					if (cents % 2)
					{
						coins += 1;
						cents -= 1;
						continue;
					}
					else
					{
						coins += 1;
						cents -= 2;
						continue;
					}
				}
				else
				{
					coins += 1;
					cents -= 5;
					continue;
				}
			}
			else
			{
				coins += 1;
				cents -= 10;
				continue;
			}
		}
		else
		{
			coins += 1;
			cents -= 25;
			continue;
		}
	}
	printf("%d\n", coins);

	return (0);
}
