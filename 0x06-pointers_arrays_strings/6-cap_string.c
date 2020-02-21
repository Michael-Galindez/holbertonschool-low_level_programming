#include "holberton.h"
/**
 * cap_string - capitalize the words
 * @s: string to captalize
 * Return: pointer to result
 */
char *cap_string(char *s)
{
	char *r = s;
	int d;
	char a[] = " \t\n,.!?\"(){}";
	int o = 1;

	while (*s)
	{
		if (o && *s >= 'a' && *s <= 'z')
			*s -= 32;
		o = 0;
		for (d = 0; d < 12; d++)
		{
			if (*s == a[d])
				o = 1;
		}
		s++;
	}
	return (r);
}
