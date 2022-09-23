#include "main.h"

/**
 * _strncat -helps to concatenate two strings
 * @dest: first string
 * @src: second string
 * @n:
 * Return: pointer is returned
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0' ||  b < n)
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
