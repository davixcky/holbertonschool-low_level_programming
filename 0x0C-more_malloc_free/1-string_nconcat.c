#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates to strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be used from byte 2
 * Return: pointer to concatenated string in memory
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, l1 = 0, l2 = 0;
	char *ptr;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n >= l2)
		ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	else
		ptr = malloc(sizeof(char) * (l1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		ptr[i] = s1[i];
	}
	if (n >= l2)
		for (; i < (l1 + l2); i++)
		{
			ptr[i] = s2[j++];
		}
	else
		for (; i < (l1 + n); i++)
		{
			ptr[i] = s2[j++];
		}


	ptr[i] = '\0';

	return (ptr);
}
