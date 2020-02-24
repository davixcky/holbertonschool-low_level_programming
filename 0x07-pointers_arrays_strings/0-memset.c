#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Array of char
 * @b: Constant character
 * @n: Number of bytes
 * Return: Array filled with the constant
 **/
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
