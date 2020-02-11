#include "holberton.h"

/**
 * _abs - Absolute value of a number
 * @n: Number
 * Return: Return the absolute value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	return (n * -1);
}

