#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	a = 0;
	c = 0;
	while (haystack[a] != 00)
	{
		b = 0;
		while (needle[b + c] != 00 && haystack[a + c] != 00
			&& needle[b + c] == haystack[a + c])
		{
			if (haystack[a + c] != needle[b + c])
				break;
			c++;
		}
		if (needle[b + c] == 00)
			return (&haystack[a]);
		a++;
		i++;
	}
	return (00)
}
