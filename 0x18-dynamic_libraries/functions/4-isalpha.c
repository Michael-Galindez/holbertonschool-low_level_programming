#include "holberton.h"
/**
 * _isalpha - Check if character is an alphabetic character.
 * @c: type int character
 * Return: 1 if letter and 0 if not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
