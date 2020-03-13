#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function...
 * @a: address of the main function
 * @n: number of bites
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}
/**
 * main - main function op codes
 * @argc: number of arguments
 * @argv: arrr of pinters to arguments
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return(0);
}
