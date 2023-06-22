#include <stdio.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers- function to print numbers followed by a new line
*@separator: str to print btwn nos
*@n: no passed to the fx
*@...: varaible no of numbers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list numero;
	unsigned int position;

	va_start(numero, n);

	for (position = 0; position < n; position++)
	{

	printf("%d", va_arg(numero, int));
	if (position != (n - 1) && separator !=NULL)
	printf("%s", separator);

	}
	printf("\n");
	va_end(numero);

}
