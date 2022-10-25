#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: points to pointer of the elements of a list
 * @n: new elements to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_nd, *temp = *head;

new_nd = malloc(sizeof(listint_t));

if (!new_nd)
{
return (NULL);
}
else
{
new_nd->n = n;
new_nd->next = NULL;
}
if (*head == NULL)
{
*head = new_nd;
return (new_nd);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = new_nd;
return (new_nd);
}
