#include<stdio.h>
/**
 * main - Entry point
 * all varable types and its sizes in bytes
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longType;
long long int longlongType;
float floatType;
printf("Size of int: %ld bytes\n", sizeof(charType));
printf("Size of float: %ld bytes\n", sizeof(intType));
printf("Size of double: %ld bytes\n", sizeof(longType));
printf("Size of char: %ld byte\n", sizeof(longlongType));
printf("Size of char: %ld byte\n", sizeof(floatType));
return (0);
}
