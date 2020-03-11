#include "function_pointers.h"
/**
* print_name -
*
*
*
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
