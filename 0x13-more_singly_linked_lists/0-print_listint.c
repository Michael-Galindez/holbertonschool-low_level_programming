#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints the elements of a list.
 * @h: list to print
 * Return: number of elements the list
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
