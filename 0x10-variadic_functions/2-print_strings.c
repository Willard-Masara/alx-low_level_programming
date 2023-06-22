#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_strings-prints strings, then \n
*@separator: str to be passed btwn nos
*@n: totAL STR passed
*@...:varialbe no of str to be printed
*
*return: if str is NULL, return all
*/
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list strings;
	char *str;
	unsigned int position;

	va_start(strings, n);

	for (position = 0; position < n; position++)
	{
	str = va_arg(strings, char *);
	if (str == NULL)
	printf("nil");
	else
	printf("%s", str);

	if (position != (n - 1) && separator != NULL)
	printf("%s", separator);


	}
	printf("\n");
	va_end(strings);





}
