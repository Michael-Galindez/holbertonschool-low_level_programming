#include "function_pinters.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
		while (i < size)
			action(array[i]);
	i++;
}
