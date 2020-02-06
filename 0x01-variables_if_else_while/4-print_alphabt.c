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
	if (abc == 'q' || abc == 'e')
{
	abc++;
}
	putchar(abc);
	abc++;
}
	putchar('\n');
return (0);
}
