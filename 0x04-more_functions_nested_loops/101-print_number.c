#include "holberton.h"
#include <stdio.h>

/**
 * print_number - Print a integer
 * @n: Number
 */
void print_number(int n)
{
	int  dig, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	i = 0;
	while (n != 0)
	{
		dig = n % 10;
		i = i * 10 + dig;
		n /= 10;
	}


	while (i > 0)
	{
		dig = i % 10;
		_putchar(dig + 48);
		i = i / 10;
	}

}
