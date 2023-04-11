#include "main.h"
/**
 *_isalpha- alphabet function
 *@c- alphabet checking
 *return: 1 or 0 condition
*/

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}
