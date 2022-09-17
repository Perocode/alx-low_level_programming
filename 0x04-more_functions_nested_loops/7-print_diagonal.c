#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times the character \ is printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
int j;

for (j = 0; j < n; j++)
{
for (i = 0; i < n; i++)
{
if (i == j)
{
_putchar('\\');
}
else if  (i < j)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
