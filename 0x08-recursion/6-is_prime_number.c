#include "main.h"
/**
 * is_prime_number - retuns 1 if prome 0 if not
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (oprime(n, n - 1));
}

/**
 * oprime - search primes
 * @a: integer
 * @b: integer
 * Return: prime numbers
 */
int oprime(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (0 + oprime(a, b + 1));
}
