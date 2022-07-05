#include "dog"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @owner: the name of the owner
 * @name: name of the dog
 * @age: age of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->owner = owner;
	d->name = name;
	d->age = age;
}
