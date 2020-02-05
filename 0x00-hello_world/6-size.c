#include <stdio.h>
/**
 * main - Entry point
 * all varable types and its sizes in bytes
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int in;
long int lon;
long long int lonn;
float fl;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(ch));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lon));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lonn));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
return (0);
}
