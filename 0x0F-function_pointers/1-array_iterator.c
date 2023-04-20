#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator- want to call it parent function, executes parameter function
*@action: pointer to function to be used
*@size: size of the array
*
*return: nada
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}




}
