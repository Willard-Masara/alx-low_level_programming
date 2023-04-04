#include "main.h"
#include <stdio.h>
/**
*print_square-prints squares
*@size: parameter to be used
*return: always 0
*/

void print_square(int size)
{
	int incl1, incl2;

	if (size > 0)
	{
	for (incl1 = 0; incl1 < size; incl1++)
	{
	for (incl2 = 0; incl2 < (size - 1); incl2++)
	{
	putchar('#');
	}
	putchar('#');
	putchar('\n');
	}
	}
	else
	{
	putchar('\n');
	}
}
