#include "main.h"
/**
 * _memset - fills memory with byte
 * @s: pointer
 * @b: constant byte
 * @n: n bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
