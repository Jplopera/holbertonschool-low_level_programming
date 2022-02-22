#include "main.h"
/**
 * print_rev - print a reverse string
 * @s: pointer
 */
void print_rev(char *s)
{
	int r;

	for (r = 0; s[r] != 00; r++)
		;

	for (r--; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar(10);
}
