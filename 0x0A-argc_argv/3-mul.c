#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main-multiplies two ints and prinst output
*@argc: argument count
*@argv: array of arguments
*
*return: always 0 to show success of code
*/
int main(int argc, char *argv[])
{

	int n1 = 0, n2 = 0; /*careful with this one*/

	if (argc == 3)
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);

}
