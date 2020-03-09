#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t* p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(owner));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
