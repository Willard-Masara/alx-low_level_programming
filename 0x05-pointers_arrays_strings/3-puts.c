#include "main.h"
/**
 *
 *_puts-prints a string
 *@str: the string to be printed
 *return: void
 */
void _puts(char *str)
{
	while  (*str != '\0')
	{
	_putchar (*str++);
	}
	_putchar ('\n');
}
