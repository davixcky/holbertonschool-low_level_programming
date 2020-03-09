#include "dog.h"
#include <string.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;
}
