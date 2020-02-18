#include "holberton.h"
/**
 * print_rev - .
 * @s: char variable
 *
 */
void print_rev(char *s)
{
	while (*(s + a))
	a++;

	a = a - 1;

	while (a >= s)
		_putchar(*(s + a));
	a--;

	_putchar('\n');

}
