#include "main.h"
#include <stdlib.h>
/**
 * _calloc - array memory allocation
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (0);

	s = malloc(nmemb * size);

	if (s == 0)
		return (0);

	for (a = 0; a < nmemb * size; a++)
		s[a] = 0;

	return (s);
}
