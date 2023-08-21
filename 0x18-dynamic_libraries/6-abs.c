#include "main.h"
#include <stdlib.h>
/**
*_abs-checks for absolute value
*@a-parameter to be checked
*return: always a
*/

int _abs(int a)
{
	if (a < 0)
	a = a * -1;
	return (a);
}
