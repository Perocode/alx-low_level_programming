#include "main.h"

/**
 * swap_int - it helps to swap the values of the pointers
 * @a: first pointer value
 * @b: second pointer value
 */
void swap_int(int *a, int *b)
{
int swp;
swp = *a;

*a = *b;
*b = swp;
}
