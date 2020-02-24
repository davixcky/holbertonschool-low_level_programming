#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be scanned
 * @accept: String containing the
 * characters to match.
 * Return: This function
 * returns the number of characters
 * in the initial segment of str1
 * which consist only of characters
 * from str2.
 **/
unsigned int _strspn(char *s, char *accept)
{
	int len, i, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (s[i] != accept[j])
			break;

	}

	return (len);
}
