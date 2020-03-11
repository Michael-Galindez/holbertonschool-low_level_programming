#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0, j;

	if (size > 0 && array && cmp)
	{
		while (i < size)
			j = cmp(array[i]);
	if (j)
		break;

	if (i < size)
		return (i);
	}
	return (-1);
}
