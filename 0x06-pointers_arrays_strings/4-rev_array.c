#include "holberton.h"
/**
 * reverse_array - reverse chars of array
 * @a: array to reverseeee
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
