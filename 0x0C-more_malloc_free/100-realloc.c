#include "holberton.h"

/**
 * _strcpy - Copy a string to another
 * @dest: Destination copy
 * @src: Source for copy
 * Return: Return the value of dest
 */
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

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(old_size);
	if (s == NULL)
		return (NULL);

	_strcpy(s, ptr);
	free(ptr);

	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	_strcpy(ptr, s);
	free(s);

	return (ptr);
}
