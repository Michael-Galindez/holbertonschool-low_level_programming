#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r6;
	int a;
	int b;

	for (r6 = 0; r6 < 100; r6++)
{
	a = r6 / 10;
	b = r6 % 10;
	putchar(a + '0');
	putchar(b + '0');
	if (r6 < 99)
{
	putchar(',');
	putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
