#include "main.h"
#include <stdio.h>
/**
*main-entry point
*description: dizzy fizzy
*return: always 0
*/
int main (void)
{
	int n = 1;

	while (n <= 100)
	{
	if (n % 3 == 0 && n % 5 == 0)
	printf(" FizzBuzz ");
	else if (n % 5 == 0)
	{
	if (n == 100)
	{
	printf(" Buzz ");
	printf("\n");
	}
	else
	printf(" Buzz ");
	}
	else if (n % 3 == 0)
	printf(" Fizz ");
	else
	printf(" % d ", n);
	n++;
	}

	return (0);

}
