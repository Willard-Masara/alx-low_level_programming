#include <stdio.h>
#include "function_pointers.h"
/**
*int_index- returns the index of the first element when cmp ! 0
*@size: number of elements in the array
*@cmp: pointer to function to be used to compare values
*
*return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))

{

	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (1);
	}
	return (-1);
}
