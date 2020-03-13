#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: coma
 * @n: unsigned int
 *Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
		i = 0;
		while (i < n)
		{

			num = va_arg(valist, int);
			printf("%d", num);
					if (i < n - 1 && separator)
						printf("%s", separator);
			i++;
}
		printf("\n");
		va_end(valist);
}
