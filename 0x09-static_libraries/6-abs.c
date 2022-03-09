#include "main.h"
/**
 * _abs - absolute value of an integer
 * @x: int number
 * Return: absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
