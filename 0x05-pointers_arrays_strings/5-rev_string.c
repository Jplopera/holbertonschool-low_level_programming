#include "main.h"
/**
 * rev_string - reverse
 * @s: array char
 */
void rev_string(char *s)
{
	int a, b, c, d;

	for (a = 0; s[a] != 00; a++)
		;

	for (b = a; a--, c = 0; c < b / 2; a--, c++)
	{
		d = s[c];
		s[c] = s[a];
		s[a] = d;
	}
}
