#include "main.h"
/**
*_puts_recursion-prints a string folowedby a nu line
*@s: pointer to a string
*return:nothing
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);


}
