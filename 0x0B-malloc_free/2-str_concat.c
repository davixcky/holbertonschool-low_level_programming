#include "holberton.h"
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, i, j;
	char *dest;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = ' ';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = ' ';
	}

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);

	dest = malloc(size_s1 + size_s2);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		*(dest + i) = *(s1 + i);

	for (j = 0; j < size_s2; i++, j++)
		*(dest + i) = s2[j];

	*(dest + i) = 0;

	return (dest);
}