#include "holberton.h"

/**
 * _pow_recursion - Pow
 * @x: Base
 * @y: Exponent
 * Return: Pow
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
