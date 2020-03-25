#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node to the list.
 * @head: douuble pointer to the list
 * @n: integer to add to the list
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neww;

if (head == NULL)
return (NULL);
neww = malloc(sizeof(listint_t));
if (neww == NULL)
return (NULL);
neww->n = n;
neww->next = *head;
*head = neww;
return (neww);
}
