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

	if (abc == 'q' || abc == 'e')
{
	abc++;
}
	putchar('\n');
}
return (0);
}
