#include "holberton.h"
/**
 * print_binary - print binary
 * @n: int given
 * Return: number of changes
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
 return (0);
}
