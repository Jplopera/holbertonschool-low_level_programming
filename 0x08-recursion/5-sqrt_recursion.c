#include "main.h"
/**
 * _sqrt_recursion - sqare root
 * @n: integer
 * Return: natural sqare root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (op(n, 0));
}

/**
 * op - operation with recursion
 * @a: integer
 * @b: integer
 * Return: sqare root
 */
int op(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (op(a + 1, b));
}
