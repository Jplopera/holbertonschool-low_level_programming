#include "function_pointers.h"
/**
 * print_name - prints names
 * @name: name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
