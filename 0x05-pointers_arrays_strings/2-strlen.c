#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: a.
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	return (a);
}
