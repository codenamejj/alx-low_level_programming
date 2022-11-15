#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dogi
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
