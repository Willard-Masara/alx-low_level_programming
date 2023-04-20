#include "function_pointers.h"
#include <stdio.h>
/**
*print_name- prints a name
*@name: pointer to parameter
*@f: pointer to function
*description: the program prints a name by calling a function pointer
*return: nada
*/
void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)

	return;
	
	f(name);

}
