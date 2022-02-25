#include "main.h"
/**
 * cap_string - Capitalize all
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int a = 0, x;
	int b[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + a) > 96 && *(s + a) < 123)
		*(s + a) -= 32;
	a++;
	while (*(s + a) != 00)
	{
		for (x = 0; x < 13; x++)
		{
			if (*(s + a) == b[x])
			{
				if ((*(s + (a + 1)) > 96) && (*(s + (a + 1)) < 123))
					*(s + (a + 1)) -= 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
