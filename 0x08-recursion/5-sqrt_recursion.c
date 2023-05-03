#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
*_sqrt_recursion- to return the natural sqrt of a no
*@n: no to calculate sqrt of
*
*Return: result sqrt
*/

int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
*actual_sqrt_recursion- find the natural root
*@n: numbrr to calc sqrt of
*@i: iterator
*
*Return: the rsult sqrt
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (actual_sqrt_recursion(n, i + 1));


}
