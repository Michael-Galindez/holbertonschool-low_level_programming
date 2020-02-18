#include "holberton.h"
/**
 * puts2 - prints othe r chars.
 * @str: the string to print.
 */
void puts2(char *str)
{
  int d = 0;

  while (*(str + d))
    {
    _putchar(*(str + d));
  d = d + 2;
  }
  _putchar('\n');
}
