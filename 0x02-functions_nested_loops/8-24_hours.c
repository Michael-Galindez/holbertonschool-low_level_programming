#include "holberton.h"
/**
 * jack_bauer - Print every minute of the day
 * Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h;
	int l;

	for (h = 0; h <= 23; h++)
	{
		for (l = 0; l <= 59; l++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar('\n');
		}
	}
}
