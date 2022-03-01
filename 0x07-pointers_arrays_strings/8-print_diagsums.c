#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagonals
 * @a: pointer
 * @size: natrix size
 */
void print_diagsums(int *a, int size)
{
	int z, x, y;

	x = 0;
	y = 0;

	for (z = 0; z < (size * size); z++)
	{
		if (z % (size + 1) == 0)
			x += *(a + z);
		if (z % (size - 1) == 0 && z != 0 && z < size * size - 1)
			y += *(a + z);
	}
	printf("%i, %i\n", x, y);
}
