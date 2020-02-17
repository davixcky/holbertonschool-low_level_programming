#include "holberton.h"

/**
 * _strcpy2 - Copy a string to another
 * @dest: Destination copy
 * @src: Source for copy
 */
void _strcpy2(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
}

/**
 * rev_string - Reverses a string.
 * @s: String
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	char aux[i];

	_strcpy2(aux, s);

	j = 0;
	i--;
	for (; i >= 0; i--)
	{
		s[j] = aux[i];
		j++;
	}
}
