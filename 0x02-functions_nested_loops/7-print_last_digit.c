#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
int d;

if (n < 0)
{
d = -1 * (n % 10);
_putchar(d + '0');
return (d);
}
else
{
d = n % 10;
_putchar(d + '0');
return (d);
}
}
