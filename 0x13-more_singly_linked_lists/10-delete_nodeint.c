#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at a given
 *                           indes of a listint_t list
 * @head: A pointer ti the address of the
 *         head of the listint_t list
 * @index: he index of the node that should be deleted. Index starts at 0
 * Return: On succes - 1
 *         On failure - -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *dup = *head;
unsigned int nd;

if (dup == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(dup);
return (1);
}

nd = 0;

while (nd < (index - 1))
{
if (dup->next == NULL)
{
return (-1);
}
dup = dup->next;
}
temp = dup->next;
dup->next = temp->next;
free(temp);
return (1);
}
