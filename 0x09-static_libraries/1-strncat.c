#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: char string
 * @src: char string
 * @n: int
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != 00; a++)
		;

	for (b = 0; src[b] != 00 && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
