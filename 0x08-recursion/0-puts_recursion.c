#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the string to print
 * Return new line when there is no character
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
