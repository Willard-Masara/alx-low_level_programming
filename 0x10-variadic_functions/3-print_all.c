#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all- this prints anything
*@format: ls of arguments passed to the fx
*/

void print_all(const char * const format, ...)
{

	int i = 0;
	char *str, *pos = " ";

	va_list list;

	va_start(list, format);

	if (format)
	{

	while (format[i])
	{
	switch (format[i])
	{

	case 'c':
	printf("%s%c", pos, va_arg(list, int));
	break;
	case 'i':
	printf("%s%d", pos, va_arg(list, int));
	break;
	case 'f':
	printf("%s%f", pos, va_arg(list, double));
	break;
	case 's':
	str = va_arg(list, char *);

	if (!str)
	str = "(nil)";
	printf("%s %s", pos, str);
	break;
	default:
	i++;
	continue;

	}
	pos = ", ";
	i++;
	}


}
}
