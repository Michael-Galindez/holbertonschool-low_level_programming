#include "holberton.h"
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int d = 0; /* factor */
	int o; /* count  */
	int c; /* computed value*/

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			c = d * o;

			if (c > 9)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (o != 0)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}

			if (o != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			o++;
		}
		_putchar('\n');
		d++;
	}
}
