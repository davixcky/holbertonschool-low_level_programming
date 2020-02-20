#include "holberton.h"

/**
 * _strlen - Len of a string
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * _strcat - Concatenates two strings
 * @dest: String concatenate
 * @src: Source string
 * Return: A string concatenate
 */
char *_strcat(char *dest, char *src)
{
	int l_dest, i;

	l_dest = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++, l_dest++)
		dest[l_dest] = src[i];

	dest[l_dest] = '\0';

	return (dest);
}
