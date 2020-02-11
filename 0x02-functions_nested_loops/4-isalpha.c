#include "holberton.h"

/**
 * _isalpha - Verify if the character is a letter
 * @c: Character to be verified
 * Return: Return 1 if is a letter and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}

