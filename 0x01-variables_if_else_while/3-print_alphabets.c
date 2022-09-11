#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
char al = 'a';
char alp = 'A';

while (al <= 'z')
{
putchar(al);
al++;
}
while (alp <= 'Z')
{
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
