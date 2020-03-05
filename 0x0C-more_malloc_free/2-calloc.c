#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - callocs function lmaoo
 * @nmemb: memory of the thing
 * @size: the size
 * Return: Pointer to char.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

		if (nmemb == 0 || size == 0)
			return (NULL);

		p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);
				for (i = 0; i < (nmemb * size); i++)
					p[i] = 0;
	return (p);
					}
