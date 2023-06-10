#include "main.h"
/**
 * _strchr- this is the starting pt
 * @s: inputed val
 * @c: inputed val
 * Return: always nada
 */
char *_strchr(char *s, char c)
{
	int w = 0;
	for (; s[w] >= '\0'; w++)
	{
	if (s[w] == c)
	return (&s[w]);

	}

	return (0);


}
