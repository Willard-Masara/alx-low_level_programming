#include <stdlib.h>
#include "main.h"

/**array_range- to create an array of ints
*@min: min range of values rsevred
*@max: max range of values reseverd
*
*Return: a pointer to the new arrray
*/
int *array_range(int min, int max)
{

	int *ptr;
	int w;
	int bytes;

	if (min > max)
	{
	return (NULL);
	}
	bytes = max - min + 1;

	ptr = malloc(sizeof(int) * bytes);

	if (ptr == NULL)
	return (NULL);

	for (w = 0; min <= max; w++)
	ptr[w] = min++;

	return (ptr);


}
