#include "holberton.h"
/**
 * print_square - print hashtags
 * @size: int number
 *
 * Return: prints squares
 */
void print_square(int size)
{
	int a, b;

	for (b = 1; b <= size; b++)
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
