#include "holberton.h"
/**
 * print_line - print line.
 * @n: int number
 * Return: Always 0.
 */
void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
			a++;
	}
	_putchar('\n');
}
