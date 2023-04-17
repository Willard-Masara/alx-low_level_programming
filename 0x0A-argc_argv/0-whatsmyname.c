#include "main.h"
#include <stdio.h>
/**
*main- prints function name
*@argc: number of arguments in command line
*@argv: areay of elements in command line
*
*return: always 0
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);

}
