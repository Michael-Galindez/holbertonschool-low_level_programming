#include "holberton.h"
/**
 * _strchr - locate a character in a string
 * @s: pointer to string
 * @c: character
 * Return: pointer to first c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
	i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
