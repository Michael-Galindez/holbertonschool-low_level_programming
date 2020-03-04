#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates 2 dimensional
 * @width: width of the arr
 * @height: height of the arr
 * Return: a double pointer
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **a;

if (width <= 0 || height <= 0)
return (NULL);
a = (int **)malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
a[i] = (int *)malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (j = 0; j < i; j++)
free(a[j]);
free(a);
return (NULL);
}
}
return (a);
}
