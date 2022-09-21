#include "main.h"

/**
 * _puts - prints the string to the screen
 * @str: pointer for the string
 * Return: void
 */

void _puts(char *str)
{
int len;

for (len = 0; (*(str + len) != '\0'); len++)
{
_putchar(*(str + len));
}
_putchar('\n');
}
