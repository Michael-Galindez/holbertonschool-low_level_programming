#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char h[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	h = n % 10;
	printf("%s %d is %d and is ", h, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\m");
	}
	else if (n % 10 == 0)
	{
	printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
