#include "main.h"
/**
 * _strcmp- to compare trs
 * @s1: the input val
 * @s2: ithe inpout val
 *
 * Return: the difference between the strs
 */
int _strcmp(char *s1, char *s2)
{
	int w;
	w = 0;
	while (s1[w] != '\0' && s2[w] != '\0')
	{
	if (s1[w] != s2[w])
	{
	return (s1[w] - s2[w]);



	}
	w++;
	}
	return (0);






}
