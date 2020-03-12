#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to serch
 * @size: size of arr
 * @cmp: compare arrss
 * Return: first index depends on th e strcmp f
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0, j;

	if (size > 0 && array && cmp)
	{
		while (i < size)
			j = cmp(array[i]);
	if (j)
	break;
i++;

	if (i < size)
		return (i);
	}
	return (-1);
}
