#include "holberton.h"
char *_strchr(char *s, char c)
{
  int i = 0;
  
  while(*(s + i))
    {
    if (*(s + i) == c)
      return *(s + i);
    }	
	if (*(s + i) = c)
	  return (s + i);
  i++;
  return (0);
}
