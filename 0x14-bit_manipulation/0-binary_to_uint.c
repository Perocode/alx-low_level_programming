#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted binary or 0 if NULL or otherwise
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int total;
int len, power;

if (b == NULL)
{
return (0);
}

total = 0;
len = 0;

while (b[len])
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
len++;
}

for (len--, power = 1; len >= 0; len--, power *= 2)
{
if (b[len] == '1')
{
total += power;
}
}
return (total);
}
