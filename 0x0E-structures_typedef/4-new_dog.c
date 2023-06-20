#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*_strlen- length of a string
*@s: string
*description: about string being copied
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	return (1);

}

/**
*_strcpy-copies the string pointed to by source
*@dest: pointer to dstination of copied string
*@src: string to be copied, source
*
*return: the pointer to destination
*/
char *_strcpy(char *dest, char *src)
{

	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);

	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
