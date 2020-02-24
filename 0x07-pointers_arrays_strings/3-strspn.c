#include "holberton.h"
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i;
  unsigned int j;
    
  for(i = 0; s[i]; i++)
    {
      for (j = 0; accept[j]; j++)
	{
	  if (s[i] == accept[j])
	    break;
	}
      if (!accept[j])
	break;
    }
    
  return (1);
}
