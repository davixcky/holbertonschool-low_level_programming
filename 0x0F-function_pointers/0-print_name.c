#include "function_pointers.h"


/**
 * print_name - Print the name with a decorator
 * @name: Name to print
 * @f: Decorator
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f ==  NULL)
		return;

	f(name);
}

