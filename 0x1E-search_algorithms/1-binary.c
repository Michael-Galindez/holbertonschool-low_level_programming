#include "search_algos.h"
/**
 * print_array - Print array
 * @array: Array
 * @size: Size of arr
 * return: Nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - Search for an index
 * @array: Array
 * @size: Size
 * @value: Value
 * Return: Index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	if (array != NULL && size > 0)
	{
		l = 0;
		r = size - 1;
		print_array(array + l, r + 1 - l);
		while (l < r)
		{
			m = (l + r) / 2;
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m;
			else
				return (m);
			print_array(array + l, r + 1 - l);
		}
	}
	return (-1);
}
