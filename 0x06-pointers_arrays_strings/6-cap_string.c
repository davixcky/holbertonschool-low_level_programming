#include "holberton.h"
/**
 * _isalpha - The letter is a letter.
 * @c: character.
 * Return: Return 1 if it's truth.
 */
int _isalpha(char c)
{
	return (c >= 'a' && c <= 'z');
}
/**
 * _bypunt - Checks if the word is precessed by a puntiation sign.
 * @sim: character.
 * Return: Return 1 if it's truth.
 */
int _bypunt(char sim)
{
	return (sim == ',' || sim == ';' || sim == '.'
			|| sim == '!' || sim == '?' || sim == '"'
			|| sim == '(' || sim == ')' || sim == '{'
			|| sim == '}' || sim == ' ');
}
/**
 * cap_string - Capitalizes all words of a string.
 * @s: String.
 * Return: Return string with capitalizes.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (_isalpha(*(s + 0)))
			*(s) = (*(s) - 32);
		if ((_bypunt(*(s + i)) || *(s + i) == '\n' || *(s + i) == '\t')
				&& _isalpha(*(s + i + 1)))
		{
			*(s + i + 1) = (*(s + i + 1) - 32);
		}
	}
	return (s);
}
