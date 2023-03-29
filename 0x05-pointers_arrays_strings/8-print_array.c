#include "main.h"
#include <stdio.h>
/**
*print_array- a function to print arr elements
*@a: array name
*@n: nunber of elements in arr
return: a and n inputs
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("% d, ", a[1]);
	}
	if (i == (n - 1))
	{
	printf(" % d", a[n - 1]);
	}
	printf("\n");
}
