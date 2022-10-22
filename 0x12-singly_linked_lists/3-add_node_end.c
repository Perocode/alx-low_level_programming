#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: points to the list
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
list_t *temp = *head;

while (str[len])
{
len++;
}

new = malloc(sizeof(list_t));

if (!new)
{
return (NULL);
}
else
{
new->str = strdup(str);
new->len = len;
new->next = NULL;
}

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
{
temp = temp->next;
}
temp->next = new;

return (new);
}
