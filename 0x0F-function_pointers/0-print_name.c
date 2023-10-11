#include "function_pointers.h"
#include <stdlib.h>

/**
*print_name - prints a name
*@name: string to be printed
*@f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
