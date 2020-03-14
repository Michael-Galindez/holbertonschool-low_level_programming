#include "variadic_functions.h"
/**
 * print_c - prints a char
 * @c: the char
 * Return: always 0
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_string - prints a string
 * @string: the string
 * Return: Always 0.
 */
void print_string(va_list string)
{
	char *str;

	str = va_arg(string, char *);
		if (str == NULL)
			str = "(nil)";
	printf("%s", str);
}
/**
 * print_i - prints integer.
 * @i: the int
 * Return: Always 0.
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - prints the float.
 * @f: the float
 * Return: Always 0.
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - prints all? var types.
 * @format: format
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{

	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_string},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
	while (p[j].t)
	{
		if (*(p[j].t) == format[i])
		{
			printf("%s", separator);
			p[j].f(valist);
			separator = ", ";
			break;
		}
		j++;
	}
	i++;
}
va_end(valist);
printf("\n");
}
