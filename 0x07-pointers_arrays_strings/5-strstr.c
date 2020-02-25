#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Len of a string
 * @s: String
 * Return: Length
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}


/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: The substring in the string
 */
char *_strstr(char *haystack, char *needle)
{
	int letter, needle_size, i;
	char *pos;

	letter = 0;

	needle_size = _strlen(needle);
	if (needle_size == 0)
		return (haystack);

	for (; *haystack != 0; haystack++)
	{
		if (*haystack == needle[0])
		{
			pos = haystack;
			for (i = 0; needle[i] != 0 && *haystack != 0; i++, haystack++)
			{
				if (*haystack != needle[i])
				{
					letter = 0;
					break;
				}

				letter++;
			}
		}
	}

	if (letter == needle_size)
		return (pos);

	return (0);
}
