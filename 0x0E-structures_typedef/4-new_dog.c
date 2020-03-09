#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t* p;

	p = malloc(sizeof(dog_t));

	p->name = malloc(sizeof(name));
	p->owner = malloc(sizeof(owner));

	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
