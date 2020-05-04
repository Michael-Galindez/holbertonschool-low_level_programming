#include "holberton.h"
/**
 * _strcat - concatenates 2 strings.
 * @src: string 1
 * @dest: string 2
 * Return: the thing on dest string.
 */
char *_strcat(char *dest, char *src)
{
	char *cat = dest;
	unsigned int d, o;

	d = 0;
	while (dest[d])
	{
		cat[d] = dest[d];
		d++;
	}
	o = 0;
	while (src[o])
	{
		cat[d] = src[o];
		o++;
		d++;
	}
	cat[d] = '\n';
	cat[d] = '\0';
	return (cat);
}
