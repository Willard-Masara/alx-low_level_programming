#include "main.h"
/**
 * _strbrk- entry pt
 * @s: input value
 * @accept: the input too'
 *
 * Return: nada
 */
char *_strpbrk(char *s, char *accept)
{

	int w;
	while (*s)
	{
	for (w = 0; accept[w]; w++)
	{
	if (*s == accept[w])
	return (s);

	}

	s++;
	}
	return ('\0');



}
