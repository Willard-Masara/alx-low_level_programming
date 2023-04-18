#ifndef MAIN_H
#define MAIN_H
/**
*struct dog- short descr of dog
*@name: dog name
*@age: dog age
*@owner: owner of dog
*description: this prog is about a struct called dog and ita atributes
*/

struct dog
{

char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif




