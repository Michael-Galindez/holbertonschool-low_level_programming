#include <stdio.h>
#include "holberton.h"
/**
 * print_number - prints the mumber
 * @n: the numberrr
 */

void print_number(int n)
{
	int res, temp, expo;

	expo = 1;
if (n >= 0)
res = n * -1;
else
{
res = n;
_putchar('-');
}
temp = res;
while (temp <= -10)
{
expo *= 10;
temp /= 10;
}
while (expo >= 1)
{
_putchar(((res / expo) % 10) * -1 + '0');
expo /= 10;
}
}
