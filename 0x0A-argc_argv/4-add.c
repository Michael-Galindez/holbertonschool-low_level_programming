#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc,char *argv[])
{
int a =0, i, j;

 i = 1;
  while (i < argc)
    {
      j = 0;
        while (argv[i][j])
        {
              if (isdigit(argv[i][j]) == 0)
              {
                      puts("Error");
                      return (1);
                    }
	      j++;
            }
	i++;
      }
  i = 0;
  while (i < argc)
    {
        a += atoi(argv[i]);
	i++;
      }
  printf("%d\n", a);
    return (0);
}
