#include "main.h"

/**
 * _strcmp - helps compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: -1 if s2 is greater than s1, 0 if equal
 * -1 if less than s1
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
