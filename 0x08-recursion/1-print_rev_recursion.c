#include "holberton.h"
/**
 * _print_rev_recursion - Pirnts a reverse string
 * @s: string to print lmao
 * Return: nothing if the string char is null
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
