#include <stdio.h>
/**
 * main - digits in all combinations
 * Return: 0
 */
int main(void)
{
	int z, x, y;

	z = 0;

	while (z < 90)
	{
		x = z % 10;
		y = z / 10;

		if (y < x)
		{
			putchar(y + '0');
			putchar(x + '0');
			if (z < 89)

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
