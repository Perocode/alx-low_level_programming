#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to be factorized
 * Return: -1 if negative, 1 if zero or otherwise
 */

int factorial(int n)
{
int res;

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
res = n * factorial(n - 1);
return (res);
}
}
