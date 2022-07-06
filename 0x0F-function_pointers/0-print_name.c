#include "function_pointers.h"

/**
*print_name- lets prints a name
*@name : name input
*@f: function pointer
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
