#include "function_pointer.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to print
 * @f: function printer
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL | f == NULL)
		return;
	f(name);
}
