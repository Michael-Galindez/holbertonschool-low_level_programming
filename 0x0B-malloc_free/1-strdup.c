#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy a string with memory allocation.
 * @str: the string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *a;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
a = malloc(i *sizeof(char));
if (a == NULL)
{
return (NULL);
}
j = 0;
while (j < i)
{
a[j] = str[j];
j++;
}
return (a);
}
