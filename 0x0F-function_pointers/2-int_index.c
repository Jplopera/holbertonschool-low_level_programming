#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: integer pointer
 * @size: size of array
 * @cmp: function pointer
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

