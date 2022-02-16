#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c, a;

	for (c = 0; c <= 9; c++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
