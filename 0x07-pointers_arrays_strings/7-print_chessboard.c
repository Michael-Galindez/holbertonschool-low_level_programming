#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - print chessboard lmao
 * @a: to print
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
