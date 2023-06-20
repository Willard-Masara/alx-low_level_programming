#include <stdlib.h>
#include "dog.h"

/**
*init_dog- name of function
*@d: pointer to struct dog
*@name: name to declare
*@age: age to declare
*@owner: declaration
*description: this is a structure linked to header dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;


}
