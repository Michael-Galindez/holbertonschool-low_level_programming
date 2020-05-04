#include "holberton.h"
/**
 * _isupper - Checks if its capital or not.
 * @c: Int number
 * Return: 1 if capital, 0 otherwise .
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);

}
