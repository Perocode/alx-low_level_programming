#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
int ba = 0;
char bas = 'a';

while (ba < 10)
{
putchar(ba % 10 + '0');
ba++;
}
while (bas <= 'f')
{

putchar(bas);
++bas;
}
putchar('\n');
return (0);
}
