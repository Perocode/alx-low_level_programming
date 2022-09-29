#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: value to return
 * @y: the determinant of value x
 * Return: -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
int res;

if (x == 0)
{
return (0);
}
else if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
res = x * _pow_recursion(x, y - 1);
return (res);
}
}
