#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to search 
 * Return: pointer to location haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i,
	  int j;
	int start;

	i = j = 0;
	while (haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
		       needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + start);
		i = start + 1;
	}
	return (NULL);
}
