#include "main.h"
/**
*binary-to_uint- to convert binary nos to %u
*@b: pointer to str of 0 and 1s
*
*Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int w;
	int count, convert = 1;

	if (!b)
	return (0);

	w = 0;
	for (count = 0; b[count] != '\0'; count++)
	{
	count--;
	for (; count >= 0; convert *= 2)
	{
	if (b[count] != '0' && b[count] != '1')
	return (0);
	if (b[count] & 1)
	w += convert;
	count--;

	}
	}
	return (w);
}
