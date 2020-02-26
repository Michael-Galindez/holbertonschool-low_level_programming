#include "holberton.h"
/**
 * checksqtr - check the code for Holberton School students.
 * @a: integer a
 * @b: integer b
 * Return: Always 0.
 */
int checksqtr(int a, int b)
{
if (a == (b * b))
{
return (b);
}
if (b * b > a)
{
return (-1);
}
return (checksqtr(a, b + 1));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: int number
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n == 1)
{
return (1);
}
if (n == 0)
{
return (0);
}
if (n < 1)
{
return (-1);
}
return (checksqtr(n, 1));
}
