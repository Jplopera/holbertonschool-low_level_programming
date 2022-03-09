#include "main.h"
/**
 * _strspn - length of a prefix substring.
 * @s: string
 * @accept: ponter
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	a = 0;
	c = 0;

	while (s[a] != 00)
	{
		b = 0;
		while (accept[b] != 00)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == 00)
			break;
		a++;
	}
	return (c);
}
