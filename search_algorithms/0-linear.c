#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using the Linear
 * search algorithm.
 * @array: arrey to search in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: Value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
