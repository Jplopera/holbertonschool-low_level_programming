#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 00; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = 00;

	return (dest);
}
