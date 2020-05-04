#include "holberton.h"
/**
 * _strlen - checks lenght of string.
 * @s: var char.
 * Return: the result of a.
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	return (a);
}
