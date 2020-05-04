#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head.
 * @idx: index
 * @n: node
 * Return: new node ll
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *next, *cu;
unsigned int i;

if (h == NULL)
return (NULL);

if (idx != 0)
{
cu = *h;
for (i = 0; i < idx - 1 && cu != NULL; i++)
cu = cu->next;
if (cu == NULL)
return (NULL);
}

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
if (idx == 0)
{
next = *h;
*h = new;
new->prev = NULL;
}

else
{
new->prev = cu;
next = cu->next;
cu->next = new;
}
new->next = next;
if (new->next != NULL)
new->next->prev = new;
return (new);
}
