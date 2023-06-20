#ifndef DOG_H
#define DOG_H

/**
*struct dog- info on dog, like whos the owner and age
*@name: dogs name
*@age: dogs age
*@owner: willards's dog
*/


struct dog
{

	char *name;
	float age;
	char *owner;

};

/**
*dog_t- typedef for the dog struct
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_dog(struct dog *d);
#endif
