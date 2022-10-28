#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: points to number to change
 * @index: index position to change
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int c = 1;
unsigned int temp;

if (index > 64)
{
return (-1);
}
temp = index;

while (temp > 0)
{
c *= 2;
temp--;
}

if ((*n >> index) & 1)
{
*n -= c;
}
return (1);
}
