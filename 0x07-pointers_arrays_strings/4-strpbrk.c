#include "holberton.h"

/**
 * _strpbrk - Finds the first character in the string s that
 * matches any character specified in accept
 * @s: String to be scanned
 * @accept: String containing the characters to match
 * Return: It returns a pointer to the character in s1 that
 * matches one of the characters in s2, else returns NULL.
 **/
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

	}

	return (0);
}
