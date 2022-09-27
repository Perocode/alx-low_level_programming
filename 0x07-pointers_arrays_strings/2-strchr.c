#include "main.h"
#include "stdio.h"

/**
 * _strchr - helps locates the character in the string
 * @s: string to be searched
 * @c: char to find
 * Return: s if char c is in string s or NULL otherwise
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
