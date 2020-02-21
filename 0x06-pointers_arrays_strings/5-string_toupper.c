#include "holberton.h"
/**
 * string_toupper - lowercase to uppercase
 * @s: string to change
 * Return: pointer to output thing
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (p);
}
