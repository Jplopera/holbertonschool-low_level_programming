#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory using malloc
 * @b: unsigned integer
 * Return: msl
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
