#include "holberton.h"

/**
 * _strlen - Length of a string
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
 * _strncat - Concatenate two strings
 * @dest: String stored
 * @src: Source
 * @n: Numbers of bytes
 * Return: Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l_dest, l_src, i;

	l_dest = _strlen(dest);
	l_src = _strlen(src);

	for (i = 0; i < n && i <= l_src; i++, l_dest++)
		dest[l_dest] = src[i];

	dest[l_dest + 1] = '\0';

	return (dest);
}
