#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * @array: array to exxecute
 * @size: size of arrr
 * @action: pointer to functionm
 * Return: void always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
