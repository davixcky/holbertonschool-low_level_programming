#include "holberton.h"
#include <stdio.h>

/**
 * calculate_divisor - Calculate the divisor of a number
 * @n: Number
 * Return: Divisor number
 */
int calculate_divisor(int n)
{
	int div;

	div = 1;
	while (n > 0)
	{
		div = div * 10;
		n = n / 10;
	}

	return (div / 10);
}

/**
 * print_number - Print a number
 * @n: Number
 */
void print_number(int n)
{
	int div;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}


	div = calculate_divisor(n);
	while (n > 0)
	{
		_putchar(n / div + 48);
		n = n % div;
		div = div / 10;
	}

}

