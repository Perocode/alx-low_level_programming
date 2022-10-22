#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: points to the list
 * Return: number of elements in the pointer
 */

size_t list_len(const list_t *h)
{
size_t s = 0;

while (h)
{
s++;
h = h->next;
}
return (s);
}
