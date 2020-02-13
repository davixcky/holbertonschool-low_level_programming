#include "holberton.h"

/**
 * print_line - Print a line
 * @n: Large of the line
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}

	_putchar('\n');

}

