#include "main.h"
/**
*get_endianness- checkd endianness
*
*Return: 0 or 1
*/
int get_endianness(void)
{

	unsigned int w;
	char *c;

	w = 1;
	c = (char *) &w;

	return ((int) *c);

}
