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
