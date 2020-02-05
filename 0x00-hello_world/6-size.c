#include<stdio.h>
/**
 * main - Entry point
 * all varable types and its sizes in bytes
 * Return: Always 0 (Success)
 */
int main(void)
{
char charT;
int intT;
long int longT;
long long int longlongT;
float floatT;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(charT));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(intT));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(longT));
printf("Size of long long int: %lu byte\n", (unsigned long)sizeof(longlongT));
printf("Size of float: %lu byte\n", (unsigned long)sizeof(floatT));
return (0);
}
