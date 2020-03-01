#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument pointers to strings
 * Return: 0 else 1
 */
int main(int argc, char *argv[])
{
int x = 0;
int y = 0;
int z = 0;

if (argc != 3)
{
puts("Error");
return (1);
}

else
{
x = atoi(argv[1]);
y = atoi(argv[2]);
z = x *y;

printf("%d\n", z);
}
return (0);
}
