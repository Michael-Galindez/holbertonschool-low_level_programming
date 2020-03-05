#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * array_range: range or an wrray
 * @max: int maximum
 * @min: int minimum
 * Return: idk yet
 */
int *array_range(int min, int max)
{
	int l, i;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
		if (a == NULL)
			return (NULL);

		for (i = 0; i < l; l++, min++)
		a[i] = min;

	return (a);
		}
