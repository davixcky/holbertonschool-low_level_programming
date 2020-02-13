#include "holberton.h"

/**
 * _isdigit - Verify if is a number
 * @c: Character to verify
 * Return: 1 if is a number and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

