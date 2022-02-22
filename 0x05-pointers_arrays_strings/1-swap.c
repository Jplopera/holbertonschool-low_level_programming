#include "main.h"

/**
 * swap_int - Swap valiues a and b
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
