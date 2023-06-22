#include <stdio.h>
#include<stddef.h>

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

	if (array && size > 0 && action)
	{

	for (i = 0; i < size; i++)
	{
	action(array[i]);

	}

	}


}


