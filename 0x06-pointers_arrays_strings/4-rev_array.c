#include "main.h"

/**
 * reverse_array - helps in the reversal of array
 * @a: array
 * @n: the number of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int x, temp, check;

if (n % 2 == 0)
{
check = n;
}
else
{
check = n - 1;
}
for (x = 0; x < check / 2; x++)
{
temp = a[x];
a[x] = a[n - x];
a[n - 1] = temp;
n--;
}
}
