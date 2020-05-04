#include "lists.h"

/**
 * free_dlistint - free list node
 * @head: head (start of the .list)
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;

while (head != NULL)
{
next = head->next;
free(head);
head = next;
}
}
