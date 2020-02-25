#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{
	int j;

	for (; *haystack != '\0'; haystack++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack == needle[j])
			{
				return (haystack);
			}
		}

	}

	return (0);
}
