#include "main.h"

/**
 * _strspn - gets the length of the prefix
 * @s: pointer char s string
 * @accept: list of character to match
 * return: number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}
