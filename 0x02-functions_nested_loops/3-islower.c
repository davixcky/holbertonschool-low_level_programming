#include "holberton.h"

/**
 * _islower - Entry point
 * @c: integer value of a ascii
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

