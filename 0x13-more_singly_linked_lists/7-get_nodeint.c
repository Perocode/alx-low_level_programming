#include "lists.h"

/**
 * get_nodeint_at_index - finds a given node of a linked list
 * @head: points to the list head
 * @index: The index of the node, startint at 0
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int nd;
nd = 0;

while (nd < index)
{
if (head == NULL)
{
return (NULL);
}
else
{
head = head->next;
}
nd++;
}
return (head);
}
