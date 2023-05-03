#include <stdlib.h>
#include "dog.h"

/**
*_strlen-the length of a str
*@s:string to be evaluated
*
*Return: strlen
*/
int _strlen(char *s)

{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
	i++;

	}
	return (i);
}
/**
*_strcpy- copies the str pointed to by source
*@dest: this is the destination
*@src: the string to be copied
*
*Return: pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;
	len = 0;

	while (src[len] != '\0')
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
	}
/**
*new_dog- this creates a new dog
*@name: name of the poppy
*@age: dog age
*@owner: the master
*
*Return: ptr or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
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




