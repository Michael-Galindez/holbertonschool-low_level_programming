#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list like an array
 * Return: number of nodes or values in the list
 */
size_t print_list(const list_t *h)
{
int d = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
d++;
h = h->next;
}
return (d);
}
