#include "main.h"
#include <stdio.h>
/**
*main-prints total of args to program
*@argc: number of arguments
*@argv: array of arguments
*
*return: always 0
*/
int main(int argc, char *argv[])
{

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);



}
