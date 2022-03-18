#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform
 * @s: argument
 * Return: operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x;

	x = 0;
	while (x < 5)
	{
		if (ops[x].op[0] == s[0])
			return (ops[x].f);
		x++;
	}
	return (0);
}
