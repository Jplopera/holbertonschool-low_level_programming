#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char arrayr
 */
void puts2(char *str)
{
	int r;

	for (r = 0; str[r] != 00; r++)
	{
		if (r % 2 == 0)
		{
			_putchar(str[r]);
		}
	}
	_putchar(10);
}

