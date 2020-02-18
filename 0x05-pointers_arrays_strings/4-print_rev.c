#include "holberton.h"
/**
 * print_rev - prints a reverse string.
 * @s: type char variable.
 */
void print_rev(char *s)
{
	int a = 0;

	while (*(s + a))
	a++;
	a = a - 1;
	while (a >= 0)
	{
		_putchar(*(s + a));
	a--;
	}
	_putchar('\n');

}
