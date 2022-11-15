#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dogi
 * @d: struct
 * @name: dog name
 * age: dog age
 * @owner: dog owner
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}


