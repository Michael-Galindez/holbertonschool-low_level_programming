#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r6 = '0';

	for (r6 = '0'; r6 < 10; r6++)
	{
		putchar(r6 + '0');
	}
for (r6 = 'a'; r6 <= 'f'; r6++)
{
	putchar(r6);
	r6++;
}
putchar('\n');
return (0);
}
