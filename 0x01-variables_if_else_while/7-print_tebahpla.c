#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char r = 'z';

	while (r >= 'a')
{
	putchar(r);
	r--;
}
	putchar('\n');
	return (0);
}
