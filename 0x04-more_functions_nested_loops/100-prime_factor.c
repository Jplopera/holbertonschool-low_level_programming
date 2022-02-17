#include <stdio.h>
/**
 * main - lagert prime
 * Return: 0
 */
int main(void)
{
	long p = 612852475143, d;

	while (d < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p = (p / 2);
			continue;
		}

		for (d = 3; d < (p / 2); d = (d + 2))
		{
			if ((p % d) == 0)
			{
				p = (p / d);
			}
		}
	}
	printf("%ld\n", p);
	return (0);
}

