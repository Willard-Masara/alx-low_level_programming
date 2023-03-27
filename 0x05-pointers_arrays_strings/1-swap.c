#include <stdio.h>
/**
 * main-entry ppoint
 * description-swapping an int value
 * return: always 0
 */

void swap_int(int *a, int *b);

{
	int temp = *a;
	int *a = *b;
	int *b = temp;
}

