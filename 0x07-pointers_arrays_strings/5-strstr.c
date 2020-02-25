#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to search
 * Return: pointer to location haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
