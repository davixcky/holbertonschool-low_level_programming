#include "holberton.h"

/**
 * swap - Swap two integeres
 * @a: Integer
 * @b: Integer
 */
void swap(char *a, char *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/**
 * _strlen - Len of a string
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * rev_string - Reverses a string.
 * @s: String
 */
void rev_string(char *s)
{
	int i, size;

	if (!s)
		return;

	size = _strlen(s);

	if (size < 2)
		return;

	for (i = 0; i < size / 2; i++)
	{
		swap(s + i, s + size - i - 1);
	}
}

