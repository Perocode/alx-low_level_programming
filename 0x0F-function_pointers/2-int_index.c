#include "function_pointers.h"

/**
 * int_index - it searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that match cmp or -1 in none
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
i = 0;
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
}
return (-1);
}
