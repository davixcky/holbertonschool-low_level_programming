#include "holberton.h"

char *_strdup(char *str)
{
	int size, i;
	char *dest;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	dest = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		*(dest + i) = *(str + i);

	*(dest + i) = 0;

	return (dest);
}
