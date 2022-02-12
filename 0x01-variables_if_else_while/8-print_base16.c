#include <stdio.h>
/**
 * main - use two var
 * Return: 0
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
