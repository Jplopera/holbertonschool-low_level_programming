#include "main.h"
/**
 * main - Use _putchar
 * Return: 0
 */
int main(void)
{
	char _Putchar[] = "_putchar";
	int x = 0;

	while (_Putchar[x] != '\0')
	{
		_putchar(_Putchar[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
