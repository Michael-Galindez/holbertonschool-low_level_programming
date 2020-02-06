#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r6 = '0';

	while (r6 <= '9')
	{
		putchar(r6);
		r6++;
	}
	r6 = 'a';
	while (r6 <= 'f')
{
	putchar(r6);
	r6++;
}
putchar('\n');
return (0);
}
