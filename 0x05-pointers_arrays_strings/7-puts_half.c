#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: char arrayr
 */
void puts_half(char *str)
{
	int r;

	for (r = 0; str[r] != 00; r++)
		;

	r++;
	for ( r /= 2; str[r] != 00; r++)
	{
		_putchar(str[r]);
	}
	_putchar(10);
}

