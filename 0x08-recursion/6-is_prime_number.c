#include "holberton.h"
/**
 * checkpm - checks if the number is prime lmao.
 * @a:aux var to check the number.
 * @b:aux var to check the number.
 * Return: checks the number and gives a number to the other function
 */
int checkpm(int a, int b)
{
if (a == b)
{
return (1);
}
else if (b % a == 0)
{
return (0);
}
else
{
return (checkpm(a + 1, b));
}
}
/**
 * is_prime_number - retursn a valua if its prime.
 * @n: the given number
 * Return: the result.
 */
int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n <= 1)
return (0);
return (checkpm(2, n));
}
