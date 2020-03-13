#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum paramenters
 * @n: unsigned int to compare
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list valist;

va_start(valist, n);
i = 0;
while (i < n)
{
	sum += va_arg(valist, int);
	i++;
}
va_end(valist);

return (sum);
}
