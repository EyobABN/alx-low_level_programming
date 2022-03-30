#include "main.h"

/**
 * is_prime - checks if prime recursively
 * @n: number to be checked if prime
 * @guess: number to be checked if it is a factor of n
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime(int n, int guess)
{
	if (n == guess)
		return (1);
	if (!(n % guess))
		return (0);
	guess++;
	return (is_prime(n, guess));
}

/**
 * is_prime_number - checks if the input number is prime
 * @n: the input number
 *
 * Return: 1 if the number is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
