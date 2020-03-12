#include "function_pointers.h"
/**
* print_name - Prints a name
* @name : parameter name
* @f : pointer to func
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
