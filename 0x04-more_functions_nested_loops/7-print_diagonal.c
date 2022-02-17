#include "main.h"
/**
 * print_diagonal - print diagonal n times
 * @n: int variable
 */
void print_diagonal(int n)
{
	int m, l;

	for (m = 0; m < n; m++)
	{
		for (l = 0; l < m; l++)
		{
			_putchar(32);
		}
		_putchar(92);

		if (m < (n - 1))
		{
			_putchar(10);
		}
	}
	_putchar(10);
}
