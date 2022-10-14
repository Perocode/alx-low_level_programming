#include "function_pointers.h"

/**
 * print_name - print name
 * @name: character string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
