#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char h = 'a';

	 while (h <= 'z')
{
	_putchar(h);
	h++;
}
 _putchar('\n');

}
