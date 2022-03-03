#include "main.h"
/**
 * factorial - retuns factorial
 * @n: number
 * Return: -1, 0, n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * fatorial(n - 1));
}
