#include "holberton.h"
#include <stdio.h>

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



char *_strstr(char *haystack, char *needle)
{
	int letter, needle_size;
	char *pos;
	letter = 0;
	needle_size = _strlen(needle);
	for (; *haystack != 0; haystack++)
	{
		if (*haystack == needle[0])
		{
			pos = haystack;
			for (; *needle != 0 && *haystack != 0; needle++, haystack++)
			{
				if (*haystack == *needle)
				{
					letter++;
				}
				else
				{
					letter = 0;
				}
			}
		}
	}

	if (letter == needle_size)
		return (pos);

	return (haystack);
}
