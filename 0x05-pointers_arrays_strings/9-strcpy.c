#include "main.h"

/**
 * _strcpy - it copies the string to an allocated memory
 * @dest: destination of string to be copied
 * @src: location of string to be copied
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int len;

for (len = 0; (*(src + len) != '\0'); len++)
{
*(dest + len) = *(src + len);
}
*(dest + len) = *(src + len);
return (dest);
}
