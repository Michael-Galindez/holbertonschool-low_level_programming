#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list valist;

if (n == 0)
va_start(valist, n)

while (i < n)
sum += va_arg(valist, int)
i++;

va_end(valist)
return(sim)

}
