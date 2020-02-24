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

	for (; n > 0 && s; n--, s++)
	{
		*s = b;
	}

	return (s);
}
