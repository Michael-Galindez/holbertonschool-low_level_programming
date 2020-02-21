#include "holberton.h"
/**
 * _strncat - concatenate two strings with n 
 * @dest: string to concate
 * @src: string to concate
 * @n: number of chars to copy
 * Return: the pointer to the dest thing
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int d = 0;

	while (*dest++)
		;
	dest--;
	while (*src && d < n)
	{
		*dest = *src;
		dest++;
		src++;
		d++;
	}
	*dest = '\0';
	return (p);
}
