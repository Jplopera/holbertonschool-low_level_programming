#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int r;

	r = 0;
	for (n--; n >= 0; n--, r++)
	{
		printf("%d", a[r]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
