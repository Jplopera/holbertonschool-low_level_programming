#include <stdio.h>
/**
 * main - 3 digits in all combinations
 * Return: 0
 */
int main(void)
{
	int z, x, y, w;

	z = 0;

	while (z < 800)
	{
		x = z / 100;
		y = (z / 10) % 10;
		w = z % 10;

		if (x < y && y < w)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(w + '0');
			if (z < 789)
			{
				putchar(44);
				putchar(32);
			}
		}
		z++;
	}
	putchar('\n');
	return (0);
}
