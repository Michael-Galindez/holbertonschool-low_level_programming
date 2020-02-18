#include "holberton.h"
/**
 * _puts - prints a string.
 * @str: pointer to char.
 * Return: Always void.
 */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a))
	{
		_putchar(*(str + a));
	a++;
	}
	putchar('\n')
}
