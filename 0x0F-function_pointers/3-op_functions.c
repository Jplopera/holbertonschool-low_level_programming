#include "3-calc.h"
/**
 * op_add - Sum of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subctract of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Module of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
