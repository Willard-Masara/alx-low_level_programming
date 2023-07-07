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
	unsigned int w;

	if (n == 0 && index < 64)
	return (0);

	for (w = 0; w <= 63; n >>= 1, w++)
	{

	if (index == w)
	{
	return (n & 1);

	}
	}
	return (-1);
}
