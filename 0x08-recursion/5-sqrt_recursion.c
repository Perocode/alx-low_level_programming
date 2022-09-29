#include "main.h"

/**
 * _new_res - helps in finding the square root
 * @n: the number
 * @i: test number
 * Return: int
 */

int _new_res(int n, int i)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (i * i == n)
{
return (i);
}
else if (i * i < n)
{
return (_new_res(n, i + 1));
}
return (-1);
}

/**
 * _sqrt_recursion - helps to call new_res function
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
int i;
i = 0;

if (i < 0)
{
return (-1);
}
else
{
return (_new_res(n, i));
}
}
