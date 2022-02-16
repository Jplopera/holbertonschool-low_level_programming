#include "main.h"
/**
 * times_table - tables
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (c > 9)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(32);
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (b != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
