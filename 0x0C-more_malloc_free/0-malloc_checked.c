#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - checks allocated memory of an int.
 * @b: the int lmao.
 * Return: pointer to that address.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
		if (p == NULL)
			exit(98);
	return (p);
}
