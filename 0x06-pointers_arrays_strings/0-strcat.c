#include "holberton.h"
/**
 * _strcat - concatenates 2 strings.
 * @src: string 1
 * @dest: string 2
 * Return: the result on dest string.
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

 while (*(dest + a))
   {
   a++;
   }
 while ((*(dest + a) = *(src + b)))
   {
	a++;
	b++;
   }	
	return (dest);
}
