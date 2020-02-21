#include "holberton.h"

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 */
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * character - Verify if is a special
 * @c: Character
 * Return: 1 or 0
 */
int character(char c)
{
	char signs[] = "\t \n,.;!?\"(){}";
	int i;

	for (i = 0; i < 13; i++)
	{
		if (signs[i] == c)
			return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: String
 * Return: String
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (character(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] - 32;
		}
	}

	return (s);
}
