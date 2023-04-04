#include "main.h"
/**
*print_diagonal-draws a line
*@n: the number of linesto be drawn
*return: nothing
*/

void print_diagonal(int n)
{

	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}


}
