#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - finds the length of a string
 * @str: to find the length of a string
 * Description: use strlen to find the NULL and add the node
 */
unsigned int _strlen(char *str)
{
  unsigned int i;

  for (i = 0; str[i]; i++)
    ;
  return (i);
}
/**
 * add_node - adds a node to the linked list
 * @head: pointer to a linked list
 * @str: string to add to the new node
 * Return: pointer to the new value or node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

if (str == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = *head;
*head = new;

return (new);
}
