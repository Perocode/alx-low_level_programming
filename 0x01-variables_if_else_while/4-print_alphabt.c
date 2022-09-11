#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
char al = 'a';

while (al <= 'z')
{
if ( al != 'q' && al != 'e')
{
putchar(al);
}
al++;
}
putchar('\n');
return (0);
}
