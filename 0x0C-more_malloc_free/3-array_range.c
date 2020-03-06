#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * array_range - range of an array min and max
 * @max: int maximum
 * @min: int minimum
 * Return: idk yet
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

if (min > max)
return (NULL);
l = max - min + 1;
a = malloc(sizeof(int) * l);
if (a == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
a[i] = min;
}
return (a);
}
