#include "main.h"
/**
 * *_strcpy - copies the string pointed
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0; src[r] != 00; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = 00;
	return (dest);
}
