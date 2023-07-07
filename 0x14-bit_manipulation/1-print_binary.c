#include "main.h"
/**
*print_binary-this prints a 01 equivalent
*of base 10
*@n: %ul
*
*Return: nothing
*/
void print_binary(unsigned long int n)
{

	if (n >> 0)
	{

	if (n >> 1)
	print_binary(n >> 1);
	_putchar((n & 1) + '0');

	}
	else
	{
	_putchar('0');

	}

}
