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
 * _strncpy - Copy a string to another
 * @dest: String stored
 * @src: Source
 * @n: Numbers of bytes
 * Return: Return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l_src, i;

	l_src = _strlen(src);

	for (i = 0; i < n && i <= l_src; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
