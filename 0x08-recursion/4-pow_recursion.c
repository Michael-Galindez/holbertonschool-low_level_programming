#include"holberton.h"
/**
 * _pow_recursion - returns the value of x raised by y.
 * @x: base or main number
 * @y: exponent to raise the x
 * Return: the result of the calc
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x *= _pow_recursion(x, y - 1));
}
