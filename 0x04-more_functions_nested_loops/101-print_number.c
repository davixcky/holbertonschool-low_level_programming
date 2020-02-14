#include "holberton.h"
#include <stdio.h>

/**
 * print_number - Print a integer
 * @n: Number
 */
void print_number(int n)
{
	int  digs[10], i;

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
	while (n > 0)
	{
		digs[i] = n % 10;
		n = n / 10;
		i++;
	}

	i = i - 1;

	for (; i >= 0; i--)
	{
		_putchar(digs[i] + 48);
	}
}
