#include "main.h"
/**
 *_isupper-to check for upper-case letters only
 *@c: the character to be checked
 *
 *Return:0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);

}
