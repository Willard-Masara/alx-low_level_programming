
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*main-to print the result of ops
*@argc: arg_count
*@argv: arg_vec
*
*Return: 0
*/
int main(int __attribute__((__unused__))argc, char *argv[])
{

	int num, num1;
	char *op;


	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num = atoi(argv[1]);
	op = argv[2];
	num1 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{

	printf("Error\n");
	exit(99);
	}
	if ((*op == '/' && num1 == 0) || (*op == '%' && num1 == 0))
	{

	printf("Error\n");
	exit(100);

	}
	printf("%d\n", get_op_func(op)(num, num1));

	return (0);


}
