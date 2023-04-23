#include "main.h"
#include <stdlib.h>
/**
*create_array- make an array of characters
*@size: the size of this array to be created
*@c: character to be assigned0-create_array.c
*description: a function that creates an rray of chars
*return: a pointer to the array, otherwise NULL
*/
char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);




}
