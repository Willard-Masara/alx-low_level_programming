#include "main.h"
/**
*main-returns factorial of a number
*@n: base number for factorial
*return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (1);
	return (n * factorial(n - 1));



}
