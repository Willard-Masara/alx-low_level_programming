#include "main.h"
/**
 * _strncpy- to py str
 * @dest: the val inouted
 * @src: the value inputed
 * @n: the val inputed
 *
 * Return: the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w = 0;
	while (w < n && src[w] != '\0')
	{
	dest[w] = src[w];
	w++;
	}

	while (w < n)
	{
	dest[w] = '\0';
	w++;


	}
	return (dest);

}
