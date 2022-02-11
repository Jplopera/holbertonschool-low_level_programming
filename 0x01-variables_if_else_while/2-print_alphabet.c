#include <stdio.h>
/**
 * main - use while for incrice c and use ptchar to put all char before z
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
