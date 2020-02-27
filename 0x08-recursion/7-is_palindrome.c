#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String.
 * Return: Length of a string.
 **/
int _strlen(char *s)
{
	return (*s ? (1 + _strlen(s + 1)) : 0);
}


/**
 * compare_letters - Compare a string (First letter and the last)
 * @s: String
 * @len: Size of the string
 * @i: Position of the string
 * Return: Returns 1 if a string is a palindrome and 0 if not
 **/
int compare_letters(char *s, int len, int i)
{
	if (i < len)
	{
		if (*(s + i)  == *(s + len))
			return (compare_letters(s, len - 1, i + 1));
		else if (*(s + i) != *(s + len))
			return (0);
		else
			return (1);
	}

	return (1);
}

/**
 * is_palindrome - Sequence of characters which reads the same
 * backward as forward
 * @s: String
 * Return: Returns 1 if a string is a palindrome and 0 if not
 **/
int is_palindrome(char *s)
{
	int size = _strlen(s) - 1;

	return (compare_letters(s, size, 0));
}
