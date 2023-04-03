#include "main.h"
/**
*main-entry point
*print_alphabet-prints alphabet
*return: nothing
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
	_putchar(j);
	_putchar('\n');
	}
}
