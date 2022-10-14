#include "function_pointers.h"

/**
 * print_name - print name passed into function pointer
 * @name: character string
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
