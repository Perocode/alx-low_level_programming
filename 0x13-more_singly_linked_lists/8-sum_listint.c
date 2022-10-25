#include "lists.h"

/**
 * sum_listint - a function that sums up all data(n) of a list
 * @head: points to the linked list head
 * Return: sum of all data(n)
 */

int sum_listint(listint_t *head)
{
int sum;

sum = 0;
while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
