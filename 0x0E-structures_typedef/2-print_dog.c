#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - print struct dog
  *
  * @d: pointer to struct members/elements
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("(nil)");
		if (d->owner == NULL)
			printf("(nil)");
		printf("Name: %s \nAge: %f \nOwner: %s \n", d->name, d->age, d->owner);
	}
	else
		return;
}
