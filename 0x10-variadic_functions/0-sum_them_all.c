#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all- thios is the sum of all parameters of the fucntion
*@n: the total of parameters passed to the fnvtion
*@...:ellipsis to show variable parameters
*
*return: either 0 or the sum of the parameters
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);

	va_end(ap);
	return (sum);



}
