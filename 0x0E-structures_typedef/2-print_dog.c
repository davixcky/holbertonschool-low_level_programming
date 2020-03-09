#include "dog.h"
#include <stddef.h>
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
