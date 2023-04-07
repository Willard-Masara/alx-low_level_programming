#include "main.h"
/**
*_print_rev-recursion- prints str reverse
*@s: str pointer
*return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);

	}



}
