#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Len of a string
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strncat - Concatenate two strings
 * @dest: String stored
 * @src: Source
 * @n: Numbers of bytes
 * Return: Return dest
 */
char *_strncat(char *dest, int l_dest,  char *src, int l_src, int n, int start)
{
	int i;

	for (i = 0; i < n && i <= l_src; i++, l_dest++, start++)
		dest[start] = src[i];

	dest[start + 1] = '\0';

	return (dest);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size_s1, size_s2, size_s3;
	char *s3;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = 0;
	}

	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = 0;
	}

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);

	n = (n >= (unsigned int) size_s2 ? (unsigned int) size_s2 : n);
	size_s3 = size_s1 + n + 1;

	s3 = malloc(size_s3);
	if (s3 == NULL)
		return (NULL);

	s3 = _strncat(s3, 0,s1, size_s1,  size_s1, 0);
	size_s3 = _strlen(s3);
	s3 = _strncat(s3, size_s3, s2, size_s2, (int) n, size_s1);

	*(s3 + size_s1 + n) = 0;
	return (s3);
}
