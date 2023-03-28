#include <stdio.h>
/**
 *swap_int-swaps the values of two integers
 *@-first ineger to be swapped
 *@b-second integer to be swapped
 * return: always 0
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}

