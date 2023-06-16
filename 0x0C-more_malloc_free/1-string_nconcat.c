#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*string_nconcat- to concat to strings
*@s1: allocated space containing str1
*@s2:second str
*@n: size of memory
*
*Return: NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int w = 0;
	unsigned int m = 0;
	unsigned int b = 0;
	unsigned int a = 0;
	char *str;

	if (s1 == NULL)
	s1 = " ";
	if (s2 == NULL)
	s2 = " ";

	while (s1[w])
	{
	w++;
	}

	while (s2[b])
	{

	b++;
	}
	if (n >= b)
	a = w + b;
	else
	a = w + n;

	str = malloc(sizeof(char) * a + 1);
	if (str == NULL)
	{

	return (NULL);
	}

	b = 0;
	while (m < a)
	{
	if (m <= w)
	str[m] = s1[m];
	if (m >= w)
	{
	str[m] = s2[b];
	b++;
	}
	m++;
	}
	str[m] = '\0';
	return (str);

}
