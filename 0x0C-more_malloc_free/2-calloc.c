#include "main.h"
#include <stdlib.h>

/**
*_calloc-allocates memory for array nmemb
*@nmemb: no of members in array
*@size: bytes allocated for array
*
*Return: NULL on failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0;
	int w = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	w = nmemb * size;
	p = malloc(w);

	if (p == NULL)
	return (NULL);

	while (a < w)
	{

	p[a] = 0;
	a++;
	}
	return (p);
}

