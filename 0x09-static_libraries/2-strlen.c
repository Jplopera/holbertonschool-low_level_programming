#include "main.h"
/**
 * _strlen - return length of a string
 * @s: pointer
 * Return: r
 */
int _strlen(char *s)
{
	int r;

	for (r = 0; s[r] != 00; r++)
		;

	return (r);
}
