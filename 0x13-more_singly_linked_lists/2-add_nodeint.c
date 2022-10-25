#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: points to pointer of the elements of list
 * @n: new elements to be added
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

temp = malloc(sizeof(listint_t));

if (temp == NULL)
{
return (NULL);
}
else
{
temp->next = *head;
temp->n = n;
*head = temp;

return (*head);
}
}
