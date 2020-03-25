#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  frees a list.
 * @head: pointer to the list
 * Return: nothing lmaoo
 */
void free_listint(listint_t *head)
{
listint_t *next;

while (head)
{
next = head->next;
free(head);
head = next;
}
}
