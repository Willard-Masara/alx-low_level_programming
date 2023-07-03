#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add-for summing two nos
*@a: first arg
*@b: secoind arg
*
*Return: sum(a + b)
*/
int op_add(int a, int b)

{
	return (a + b);

}
/**
*op_sub- diff between two nos
*@a: first arg
*@b: second arg
*
*Return: sub(a-b)
*/
int op_sub(int a, int b)

{

	return (a - b);

}

/**
*op_mul- for multiplying two variables
*@a: arg
*@b: arg
*
*Return: the product of a and b
*/
int op_mul(int a, int b)

{

	return (a * b);
}
/**
*op_div- for dividing
*@a: arg
*@b: arg
*
*Return: a/b
*/
int op_div(int a, int b)

{
	return (a / b);
}
/**
*op_mod- for the remainder when dividing
*@a: arg
*@b: arg
*
*Return: the remainder
*/
int op_mod(int a, int b)

{
	return (a % b);

}
