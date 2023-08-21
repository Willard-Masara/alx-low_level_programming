#include "main.h"
/**
*_memset-fill up memory
*@s: address to be filled
*@b: filler
*@n: value specifier
*return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++ )
	{
	s[i] = b;
	n--;

	}

	return (s);

}
