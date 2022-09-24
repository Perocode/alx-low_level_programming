#include "main.h"

/**
 * reverse_array - helps in the reversal of array
 * @a: array
 * @n: the number of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int x, temp, y;

y = n - 1;
for (x = 0; x < n / 2; x++)
{
temp = a[x];
a[x] = a[y];
a[y] = temp;
}
}
