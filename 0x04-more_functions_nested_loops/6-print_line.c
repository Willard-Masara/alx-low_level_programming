#include "main.h"
#include <stdio.h>
/**
*print_line-line printer
*@n-parameter to print line
*return: always 0
*/


void print_line(int n)
{
	while (n-- > 0)
	{
	putchar('_');
	}

	putchar('\n');

}
