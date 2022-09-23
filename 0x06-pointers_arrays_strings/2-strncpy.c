#include "main.h"

/**
 * _strncpy - helps to copy string
 * @dest: first string copied
 * @src: second string copied
 * @n: number of char to be copied
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
int a, b;

for (a = 0; a < n; a++)
{

if (src[a] == '\0')

{
for (b = 1; b < n && dest[a] != '\0'; b++)
{
dest[b] = '\0';
}
break;
}
dest[a] = src[a];
}
return (dest);
}
