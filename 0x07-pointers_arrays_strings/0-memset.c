#include "holberton.h"
/**
 * _memset - Sets memory.
 * @s: char type
 * @b: char type var
 * @n: unsigned int
 * Return: returns s value.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
