#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
{
	putchar(abc);
	abc++;
}
	abc = 'A';
	while (abc <= 'Z')
	{
	putchar(abc);
	abc++;
	}
	putchar('\n');
	return (0);
}
