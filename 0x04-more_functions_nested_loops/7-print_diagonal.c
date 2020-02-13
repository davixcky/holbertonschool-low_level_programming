#include "holberton.h"

/**
 * print_spaces - Print spaces
 * @n: Number of times the spaces
 */
void print_spaces(int n)
{
	for (; n > 0; n--)
		_putchar(' ');
}


/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character
 */
void print_diagonal(int n)
{
	int i;

	i = 1;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; n > 0; n--)
	{
		_putchar('\\');
		_putchar('\n');

		if (n - 1 != 0)
			print_spaces(i);

		i++;
	}


}

