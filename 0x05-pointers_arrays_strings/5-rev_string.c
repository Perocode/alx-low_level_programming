#include "main.h"

/**
 * rev_string - prints the reverse of a string
 * @s: pointer for the string
 * Return: void
 */

void rev_string(char *s)
{
int len, x;
char a;
len = 0;
x = 0;

while (*(s + len) != '\0')
{
len++;
}
len--;
while (x < len / 2)
{
a = *(s + x);
*(s + x) = *(s + len);
*(s + len) = a;
x++;
len--;
}

}
