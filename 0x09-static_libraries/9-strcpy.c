#include "main.h"
/**
 * char *_strcpy- fx o cpy str pointed to by c
 * @dest: destination of copied str
 * @srs: the oriogin of str
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int a = 0;
	while (*(src + w) != '\0')
	{
	w++;

	}
	for (; a < w; a++)
	{

	dest[a] = src[a];
	}
	dest[w] = '\0';
	return (dest);



}
