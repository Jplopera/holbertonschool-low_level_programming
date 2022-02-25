#include "main.h"
/**
 * string_toupper - change to uppercase
 * @x: change
 * Return: x
 */
char *string_toupper(char *x)
{
	int a;

	for (a = 0; x[a] != 00; a++)
	{
		if (x[a] > 96 && x[a] < 123)
		{
			x[a] -= 32;
		}
	}
	return (x);
}
