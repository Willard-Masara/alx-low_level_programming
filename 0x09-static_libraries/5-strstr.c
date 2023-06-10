#include "main.h"
/**
 * _strstr- fx entry pt
 * @haystack: the input 
 * @needle: also input
 * Return: nada
 */
char *_strstr(char *haystack, char *needle)
{
	for (;*haystack != '\0'; haystack++)
	{

	char *w = haystack;
	char *a = needle;
	while (*w == *a && *a != '\0')
	{

	w++;
	a++;

	}
	if (*a == '\0')
	return (haystack);
	}
	return (0);

}
