#include "holberton.h"

/**
 * create_array - Initializes it with a specific char
 * @size: Size of the array
 * @c: Specific character
 * Return: The new array with specific characters
 **/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	*(ptr + i) = 0;

	return (ptr);
}
