#include "main.h"

/**
 * main - prints alphabets from a-z
 * Return: Always 0 (Successful)
 */

void print_alphabet(void)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
