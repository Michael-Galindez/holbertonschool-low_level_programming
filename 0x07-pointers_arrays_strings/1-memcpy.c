#include "holberton.h"
/**
 * _memcpy - copies memory location
 *@dest: destinat memory location
 *@src: source memory location
 *@n: number of bytes
 *Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i = 0;
  
  while(i < n)
    {
      *(dest + i) = *(src + i);
      i++;
    }
  return (dest);

}
