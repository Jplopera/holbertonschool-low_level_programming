#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory using malloc
 * @b: unsigned integer
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *a;
	a = malloc(a);

	if (a == 0)
		exit(98);

	return (a);
}
