#include <stdio.h>

void first(void) __attribute__((constructor));
/**
*first-to print a sentence before execution
*/

void first(void)

{
	printf("You're the best! and yet you must allow, \n");
	printf("I bore my house upon my back!\n");



}
