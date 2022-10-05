#include "main.h"
#include "stdlib.h"

/**
 * *create_array - creates an array of characters
 * @c: the character
 * @size: the size of array
 * Return: the array pointer
 */

char *create_array(unsigned int size, char c)
{
char *create;
unsigned int i;
i = 0;

if (size == 0)
{
return (NULL);
}
create = malloc(size * sizeof(c));

if (create == NULL)
{
return (NULL);
}
while (i < size)
{
create[i] = c;
i++;
}
return (create);
}
