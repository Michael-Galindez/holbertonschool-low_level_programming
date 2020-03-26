#include "holberton.h"
/**
 * binary_to_uint - binary number to an int.
 * @b: pointer to a string containing a binary
 * Return: decimal value of binary number
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int num;

num = 0;

if (!b)
return (0);

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}
i = 0;
while (b[i] != '\0')
{
num <<= 1;
if (b[i] == '1')
num += 1;
i++;
}
return (num);
}
