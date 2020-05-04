#include "holberton.h"
/**
 * _strcpy - function to copy string from source to other place lmao
 *@dest: pointer to destinatioin to be copied
 *@src: pointer string to be copied
 * Return: returnn value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';
	return (dest);
}
