#include "main.h"
/**
 * _memcpy - Copies memory
 * @dest: Copy dest
 * @src: Copy source
 * @n: n bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
