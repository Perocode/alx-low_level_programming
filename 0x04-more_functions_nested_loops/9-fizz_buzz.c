#include "main.h"
#include <stdio.h>

/**
 * main - it prints 1 to 100 followed by a new line
 * for the ,ultiple of 3 it prints fizz
 * for the multiple of 5 it prints buzz
 * Return: Always 0 (Successful)
 */

int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && a % 5 != 0)
{
printf(" Fizz");
}
else if (a % 5 == 0 && a % 3 != 0)
}
printf(" Buzz");
}
else if (a % 5 == 0 && a % 3 == 0)
{
printf(" FizzBuzz");
}
else
{
printf(" %d", a);
}
}
printf("\n");
return (0);
}
