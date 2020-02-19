#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print elements of the array
 * @a: int type pointer
 * @n: int type var
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; b < n; d++)
	{
		printf("%d", a[d]);
		if (d < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
