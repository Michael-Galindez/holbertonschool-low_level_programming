#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list like an array
 * Return: number of nodes or values in the list
 */
size_t print_list(const list_t *h)
{
  const list_t *temp;
  unsigned int i;

  temp = h;
  for (i = 0; temp; i++)
    {
      printf("[%u] %s\n", temp->len, temp->str);
      temp = temp->next;
    }
  return (i);
}
