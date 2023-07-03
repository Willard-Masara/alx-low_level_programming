#include <stdio.h>
#include <stdlib.h>

/**
*main- entry
*@argc: argument counts to function
*@argv: argument vector
*
*Return: zero
*/

int main(int argc, char *argv[])
{

	int size, i;
	char *array;

	if (argc != 2)
	{

	printf("Error\n");
	exit(1);
	}
	size = atoi(argv[1]);

	if (size < 0)
	{
	printf("Error\n");
	exit(2);
	}

	array = (char *)main;

	for (i = 0; i < size; i++)
	{
	if (i == size - 1)
	{

	printf("%02hhx\n", array[i]);
	break;
	}
	printf("%02hhx", array[i]);
	}
	return (0);
}
