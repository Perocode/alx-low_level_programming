#include "main.h"

/**
 * string_toupper -converts to uppercase
 * @s: string to be converted
 * Return: converted strings
 */

char *string_toupper(char *s)
{
int x;
x = 0;

while (s[x] != '\0')
{
if (s[x] >= 'a' && s[x] <= 'z')
{
s[x] = s[x] - 32;
}
x++;
}
return (s);
}
