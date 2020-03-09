#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Copy a string to another
 * @dest: Destination copy
 * @src: Source for copy
 * Return: Return the value of dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Dog created
 **/
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	_strcpy(p->name, name);
	_strcpy(p->owner, owner);
	p->age = age;

	return (p);
}
