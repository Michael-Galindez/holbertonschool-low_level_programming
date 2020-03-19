#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to the start of the list
 */
void free_list(list_t *head)
{
list_t *current, *next;

current = head;
while (current)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
