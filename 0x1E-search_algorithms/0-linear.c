#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * linear_search - search for value in array linearly
  * @array: refers to array first idx
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: To return -1 if array is NULL, or idx
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
