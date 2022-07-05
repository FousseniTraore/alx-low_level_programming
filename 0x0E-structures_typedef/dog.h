#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - a structure that contain information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog_t;
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t
*new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif
