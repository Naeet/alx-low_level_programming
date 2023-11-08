#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - fun that prints a name
 * @name: name
 * @f: fun pointet
 */
void print_name(char *name, void (*f)(char *))
{
	sif (name == NULL || f = NULL)
		return;
	f(name);
}
