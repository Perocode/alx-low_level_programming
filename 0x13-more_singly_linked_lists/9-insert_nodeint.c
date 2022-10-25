#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given position to a list
 * @head: points to the pointer of the list
 * @idx: the index where the new node should be added. index starts at 0
 * @n: integer of the new node
 * Return: The address of the new node otherwise NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *dup = *head;
unsigned int nd;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}
else
{
new->n = n;
}

if (idx == 0)
{
new->next = dup;
*head = new;

return (new);
}

nd = 0;

while (nd < (idx - 1))
{
if (dup == NULL || dup->next == NULL)
{
return (NULL);
}
dup = dup->next;
}

new->next = dup->next;
dup->next = new;

return (new);
}
