#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocate memory 
 * @ptr: pointer to address 
 * @old_size: unsigned old memory size
 * @new_size: unsigned new memory size
 * Return:  return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

if (new_size > old_size)
{
s = malloc(new_size);
free(ptr);
return (s);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
s = malloc(new_size);
free(ptr);
return (s);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
