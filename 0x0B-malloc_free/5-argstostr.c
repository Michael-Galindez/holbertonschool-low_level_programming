#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments.
 * @ac: number of args
 * @av: pointer to args
 * Return:pointer the new arr
 */
char *argstostr(int ac, char **av)
{
int i, j, n = 0, k = 0;
char *s;

if (ac <= 0 || av == NULL)
}
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
n++;
n++;
}
n++;
s = malloc(n *sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
