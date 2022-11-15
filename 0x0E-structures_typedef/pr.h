#ifndef _PR_H
#define _pr_h

#include <stdio.h>
#include <stdlib.h>

/*prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

