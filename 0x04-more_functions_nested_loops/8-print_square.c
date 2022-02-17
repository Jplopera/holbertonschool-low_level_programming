#include "main.h"
/**
 * print_square - print hashtags in squares
 * @size: square size
 */
void print_square(int size)
{
	int m, n;

	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar(35);
		}

		if (m != size - 1)
		{
			_putchar(10);
		}
	}
	_putchar(10);
}
