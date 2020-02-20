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
 * string_toupper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
