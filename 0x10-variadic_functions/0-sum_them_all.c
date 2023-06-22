#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all- fx that sums upm all arguments
*@n:number of args in fx
*@...: ellipsis to show its a variable function
*
*Return: either sum or 0
*/

int sum_them_all(const unsigned int n, ...)

{

	va_list name;
	unsigned int w;
	unsigned int sum;
	w = 0;
	sum = 0;

	va_start(name, n);

	for (w = 0; w < n; w++)
	sum += va_arg(name, int);

	va_end(name);
	return (sum);


}
