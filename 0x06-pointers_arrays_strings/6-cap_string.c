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

	int i;
	char aux;

	for (i = 0; s[i] != '\0'; i++)
	{
		aux = s[i];
		if (i == 0)
		{
			if (is_lowercase(aux))
			{
				s[i] = aux - 32;
			}
		}

		if (aux == ' ' || aux == 44 || aux == 59 || aux == 40 || aux == 41 || aux == 33 || aux == 63 || aux == 123 || aux == 125 || aux == 34 || aux == 46 || aux == '\t' || aux == '\n')
		{
			i++;
			aux = s[i];
			if (is_lowercase(aux))
			{
				s[i] = aux - 32;
			}
		}

		if (aux == '\n')
		{
			i++;
			aux = s[i];
			if (is_lowercase(aux))
				s[i] = aux - 32;
		}

		if (aux == ' ')
		{
			i++;
			aux = s[i];
			if (is_lowercase(aux))
				s[i] = aux - 32;
		}
	}

	return (s);
}
