#include "main.h"
/**
*get_bit- to output bit value at given index
*@n: %ul
*@index: bit[i]
*
*Return: value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{


	int w;

	w = (n >> index);

	if ((index > 32))
	return (-1);
	return(w & 1);


}
