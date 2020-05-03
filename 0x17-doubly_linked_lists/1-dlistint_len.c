#include "lists.h"

/**
 * dlistint_len - prints amount of elements
 * @h: pointer to the start of the list
 * Return: returns number of elelments
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
