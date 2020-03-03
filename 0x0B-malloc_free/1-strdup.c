#include "holberton.h"

/**
 *  * _strlen - Len of a string
 *   * @s: String
 *    * Return: Length
 *     */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}


char *_strdup(char *str)
{
	int size, i;
	char *dest;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	dest = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		*(dest + i) = *(str + i);

	*(dest + i) = 0;

	return (dest);
}
