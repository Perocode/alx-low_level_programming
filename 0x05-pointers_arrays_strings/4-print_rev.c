#include "main.h"
/**
 * print_rev - it prints the reverse of the string
 * @s: pointer for the string
 * Return: void
 */

void print_rev(char *s)
{
int len;
len = 0;

while (*(s + len) != '\0')
{
len++;
}
len--;
while (len >= 0)
{
_putchar(*(s + len));
len--;
}
_putchar('\n');
}
