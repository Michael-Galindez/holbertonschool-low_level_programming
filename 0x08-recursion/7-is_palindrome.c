#include "holberton.h"
/**
 * _strlen - return to  other function length of string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}
/**
 * check_palindrome - checks if string is palindromne
 * @l: left thing
 * @r: right thing
 * @p: paliundorme
 * Return: 1 if palindrome 0 if nat
 */
int check_palindrome(int l, int r, char *p)
{
if (l >= r)
return (1);
else if (p[l] != p[r])
return (0);
else
return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
int i;

i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
