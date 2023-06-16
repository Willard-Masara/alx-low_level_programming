#include <stdlib.h>
#include "main.h"

/**
*malloc_checked- to allocate memory using malloc fx
*@b: sizeof(malloc)
*
*Return: *ptr allocated memory
*/
void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);


}
