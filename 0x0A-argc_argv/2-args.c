#include <stdio.h>
#include "main.h"
/**
*main-prints all arguments it gets
*@argc: number of agruments
*@argv: array of arguments
*
*return: always 0
*/
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);

	}
	return (0);

}
