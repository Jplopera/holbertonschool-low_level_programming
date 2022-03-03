#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer
 */
void _puts_recursion(char *s)
{
	if (*s != 00)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar(10);
}
