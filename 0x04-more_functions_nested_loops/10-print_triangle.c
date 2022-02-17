#include "main.h"
/**
 * print_triangle - print triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
			{
				_putchar(32);
			}
			for (b = 0; b < a; b++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
