#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: function
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
