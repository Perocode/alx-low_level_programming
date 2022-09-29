#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be counted
 * Return: len either empty or not
 */

int _strlen_recursion(char *s)
{
int res, len;

if (*s == '\0')
{
return (0);
}
else
{
res = _strlen_recursion(s + 1);
len = res + 1;
return (len);
}
}
