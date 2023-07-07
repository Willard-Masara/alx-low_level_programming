#include "main.h"
/**
*set_bit- to set the bit[i] to 1
*@n: *%ul
*@index: the bit[i]
*
*Return: bit[i]
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int w;

	if (index > 63)
	return (-1);

	w = 1 << index;
	*n = (*n | w);

	return (1);

}
