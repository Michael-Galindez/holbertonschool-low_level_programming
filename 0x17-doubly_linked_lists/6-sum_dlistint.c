#include "lists.h"

/**
 * sum_dlistint - sum of all data
 * @head: pointer to the list
 * Return: the data result
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
