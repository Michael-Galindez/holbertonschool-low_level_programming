#include "lists.h"
/**
 * list_len - counts number of elements in the list
 * @h: pointer to the start of the linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int d;

tmp = h;
for (d = 0; tmp; d++)
tmp = tmp->next;
return (d);
}
