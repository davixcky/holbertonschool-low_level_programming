#include "holberton.h"

/**
 * print_sign - Print the sign of a number
 * @n: Number
 * Return: Return the type (Positive, Negative or Zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

