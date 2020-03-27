#include "holberton.h"
/**
 * clear_bit - sets value of a bit to 0.
 * @n: number to set
 * @index: index at indez
 * Return: 1 if error -1 lmao
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int set;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = ~(1 << index);
*n = *n & set;
return (1);
}
