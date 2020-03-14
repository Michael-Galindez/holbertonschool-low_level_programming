#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - structure for 3 point
 * @t: pointer char
 * @f: function pointer
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
