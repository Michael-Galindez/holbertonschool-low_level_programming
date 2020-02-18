#include  "holberton.h"
/**
 * swap_int - swaps values of 2 ints
 * @a: pointer to int
 * @b: pointer to int
 */
void swap_int(int *a, int *b)
{
	int c;

c = *a;
*a = *b;
*b = c;
}
