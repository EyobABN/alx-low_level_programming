#include "main.h"

/**
 * _sqrt - recursively tries to find the sqrt
 * @n: the number whose sqrt is being guessed
 * @guess: the current guess
 *
 * Return: the sqrt, if found. -1 if not.
 */
int _sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	guess++;
	return (_sqrt(n, guess));
}

/**
 * _sqrt_recursion - returns the x raised to the power of y
 * @n: the base
 *
 * Return: the power
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (n);
	else
		return (_sqrt(n, 1));
}
