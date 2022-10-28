#include "main.h"
#include <stdio.h>

/**
 * flip_bits - the number of bits you would need to flip to get
 * from one number to another
 * @n: The number of bits
 * @m: The number of bits to be flipped
 * Return: The number of bits flipped from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flp;
int num = 0;

flp = n ^ m;

while (flp > 0)
{
num += (flp & 1);
flp >>= 1;
}
return (num);
}
