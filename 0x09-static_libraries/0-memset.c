#include "main.h"
/**
 *_memset- fills a block with spec val
 *@s: starting & to be filled 
 *@b: wanted value
 *@n: no of bytes to be affecetd
 *
 *Return:a new arr of new values
 */
char *_memset(char *s, char b, unsigned int n)
{

	int w;
	for (w = 0; n > 0; w++)
	{
	s[w] = b;
	n--;
	}
	return (s);



}
