#include "function_pointers.h"
/**
* print_name - calls a f to print a name
 *@name:the name
 *@f:the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
