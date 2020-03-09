#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Animal name
 * @age: Animal age
 * @owner: Animal owner
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
