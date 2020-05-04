#include "holberton.h"
/**
 * _abs - compute the absolute value
 * @n: int number
 * Return: absolute value @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
