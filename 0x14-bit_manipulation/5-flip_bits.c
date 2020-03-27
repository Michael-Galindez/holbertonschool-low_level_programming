#include "holberton.h"
/**
 * flip_bits - number of diferent bits
 * @n: 1 number
 * @m: 2 number
 * Return: number of bits to flkip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int differ, check;
unsigned int count, i = 0;

count = 0;
check = 1;
differ = n ^ m;

for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (check == (differ & check))
count++;
check <<= 1;
}
return (count);
}
