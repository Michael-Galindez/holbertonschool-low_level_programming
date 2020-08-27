#include "search_algos.h"
/**
 * linear_search - Search for a value in an unsorted Arr
 * @array: Pointer to arr
 * @size: Size of arr
 * @value: To search
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
