#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: pointer to the list
 * @index: index
 * Return: flags if error or success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *cu;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

cu = *head;
if (index == 0)
{
*head = cu->next;
if (cu->next != NULL)
{
cu->next->prev = NULL;
}
free(cu);
return (1);
}
for (i = 0; i < index; i++)
{
if (cu->next == NULL)
return (-1);
cu = cu->next;
}
cu->prev->next = cu->next;
if (cu->next != NULL)
cu->next->prev = cu->prev;
free(cu);
return (1);
}
