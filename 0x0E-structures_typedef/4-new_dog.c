#include "dog.h"
#include <stddef.h>
/**
  * new_dog - creates a new dog
  *
  * @name: pointer to struct element
  * @float: struct member
  * @owner: pointer struct element
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *new_dog;
	struct dog_t another_dog;
	new_dog = another_dog;

	if (new_dog == another_dog)
		return (0);

	else
		return (NULL);
}

