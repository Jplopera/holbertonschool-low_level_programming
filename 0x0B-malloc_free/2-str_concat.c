#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, x, y;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != 00; a++)
		;
	for (b = 0; s2[b] != 00; b++)
		;

	con = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);

	if (a == 0)
	{
		free(con);
		return (0);
	}

	for (x = 0, y = 0; x < (a + b + 1); x++)
	{
		if (x < a)
			y[x] = s1[x];
		else
			y[x] = s2[y++];
	}
	return (x);
}

