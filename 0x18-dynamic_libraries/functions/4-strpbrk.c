#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that the bytes.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
