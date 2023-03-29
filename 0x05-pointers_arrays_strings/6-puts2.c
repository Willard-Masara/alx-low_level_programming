#include "main.h"
/**
*puts2-fucntion to print one character
*starting with first one
*@str: input
*return: print
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
