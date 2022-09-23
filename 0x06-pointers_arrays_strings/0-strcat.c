#include "main.h"

/**
 * _strcat -it concatenates two strings and return a new string
 * @dest: first string
 * @src: second string
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';

return (dest);

}
