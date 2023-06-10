#include "main.h"
/**
 * _strspn- the entry pt
 * @s: the input
 * @accept: inpute values
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int w = 0;
	int a;
	while (*s)
	{

	for (a = 0; accept[a]; a++)
	{
	if (*s == accept[a])
	{
	a++;
	break;

	}
	else if (accept[a + 1] == '\0')
	return (w);


	}
	s++;
	}
	return (w);





}

