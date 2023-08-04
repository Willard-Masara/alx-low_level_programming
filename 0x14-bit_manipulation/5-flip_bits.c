#include "main.h"
/**
*flip_bits-diff of bits from one no to no
*@n:the 1st no
*@m:second no
*
*Return: number of bits from no to no
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int w = 0;
	int diff = 0;
	unsigned long int initial;
	unsigned long int exclusive = n ^ m;

	for (w = 63; w >= 0; w--)
	{
	initial = exclusive >> w;
	if (initial & 1)
		diff++;

	}
	return (diff);

}
