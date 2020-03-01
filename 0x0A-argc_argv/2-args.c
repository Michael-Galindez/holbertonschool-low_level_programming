#include <stdio.h>
/**
 * main - prints all arguments it gets
 * @argc: number of argument to the function
 * @argv: argument pointers to strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int a = 0;

while (a < argc)
{
printf("%s\n", argv[a]);
a++;
}
return (0);
}
