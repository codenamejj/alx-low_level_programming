#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: stuct elements
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	free (d);
	return;
}
