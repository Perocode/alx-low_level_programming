#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a listint_t
 *                          list at a given position to a list
 * @head: A pointer to the address of the
 *        head of the listint_t list
 * @idx: The index of the listint_t list where the new
 *       node should be added. index starts at 0
 * @n: The integer for the new node to contain
 * Return: if the function fails - NULL
 * otherwise - the address of the new node
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
