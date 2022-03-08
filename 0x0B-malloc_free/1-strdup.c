#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy the string given as a parameter
 * @str: string
 * Return: du
 */
char *_strdup(char *str)
{
	int i, j;
	char *du;

	if (str == 0)
		return (0);

	j = 0;
	while (str[j] != 00)
		j++;

	du = malloc(j * sizeof(*str) + 1);

	if (du == 0)
		return (0);

	for (i = 0; i <= j; i++)
		du[i] = str[i];

	du[i] = 00;
	return (du);
}
