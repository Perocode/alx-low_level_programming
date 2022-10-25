#include "lists.h"

/**
 * pop_listint - deletes the head node of a linkled list
 * @head: points to the address of the linked list head node
 * Return: The head node data(n) or 0;
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int pop;

if (*head == NULL)
{
return (0);
}

temp = *head;
pop = (*head)->n;
*head = (*head)->next;

free(temp);

return (pop);
}
