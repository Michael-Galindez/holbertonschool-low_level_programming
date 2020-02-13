#include "holberton.h"
/**
 * main - print numbers to 9 excluding 2 and 4.
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
			if (a != 2 && a != 4)
				_putchar(a + '0');
			a++;
	}
	else {
		return (1);
	}
	_putchar('\n');
}
