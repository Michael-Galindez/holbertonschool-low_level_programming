#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r6 = '0';

	while (r6 < 10)
{
	putchar(r6 + '0');
	if (r6 < '9')
{
	putchar(',');
	putchar(' ');

}
	r6++;
}
	putchar('\n');
	return (0);
}
