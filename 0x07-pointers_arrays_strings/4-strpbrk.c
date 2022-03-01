#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string to compare
 * Return: NULL or bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a) != 00; a++)
	{
		for (b = 0; *(accept + b) != 00; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return (00)
}
