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
 * cap_string - capitalizes all words of a string
 * @s: String
 * Return: String
 */
char *cap_string(char *s)
{

	int i, j;
	char signs[] = {9, ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; *(s + i)  != '\0'; i++)
	{
		if (is_lowercase( *(s + i) ))
		{
			for (j = 0; signs[j] != '\0'; j++)
			{
				if (i == 0 || *(s + i - 1) == signs[j])
					s[i] -= 32;
			}
		}
	}

	return (s);
}
