#include "holberton.h"
#include <stdio.h>
/**
 * _pow - Pow
 * @x: Base
 * @y: Exponent
 * Return: Pow
 **/
unsigned int _pow(int x, int y)
{
	unsigned int i, res;

	for (i = 0, res = 1; (int) i < y; i++)
		res *= x;

	return (res);
}

unsigned int binary_to_uint(const char *b)
{
	int i, multiplier;
	unsigned int number;

	if (!b)
		return (0);

	for (i = 0; b[i] != 0; i++)
		if (b[i] != 48 && b[i] != 49)
			return (0);

	for (i = i - 1, multiplier = -1,  number = 0; i >= 0; i--)
	{
		multiplier++;

		if (b[i] == 48)
			continue;

		number += _pow(2, multiplier);
	}

	return (number);
}
