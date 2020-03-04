#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the arr
 * @c: character in arr
 * Return: the pointer to char.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *a;

if (size == 0)
{
return (NULL);
}

a = malloc(size * sizeof(char));

if (!a)
return (NULL);

i = 0;
while (i < size)
{
a[i] = c;
i++;
}
return (a);
}
