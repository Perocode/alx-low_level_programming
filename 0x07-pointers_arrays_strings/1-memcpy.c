#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of bytes to be copied
 * @src: source of bytes copied
 * @n: bytes copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
*(dest + x) = *(src + x);
}
return (dest);
}
