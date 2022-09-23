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
int a = 0;

while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}
