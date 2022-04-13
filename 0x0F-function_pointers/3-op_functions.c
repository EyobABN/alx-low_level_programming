#include "3-calc.h"

/**
 *op_add - adds two numbers
 *@a: the first number
 *@b: the second number
 *
 *Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts one number from another
 *@a: the first number
 *@b: the second number
 *
 *Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: the first number
 *@b: the second number
 *
 *Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides one number by another
 *@a: the first number
 *@b: the second number
 *
 *Return: the result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - gives the remainder of one number divided by another
 *@a: the first number
 *@b: the second number
 *
 *Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
