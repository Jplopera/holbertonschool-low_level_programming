#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: i or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (0);

	i = malloc(size * sizeof(char));

	if (i == 0)
		return (0);

	for (j = 0; j < size; j++)
		i[j] = c;

	return (i);
}
