#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: array string
 * @c: char
 * Return: NUll or pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != 00)
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
}
