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
 * print_character - Print character #
 * @n: Number of times the #
 */
void print_character(int n)
{
	for (; n > 0; n--)
		_putchar('#');
}

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, sp;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}



	sp = size;
	for (i = 1; i <= size; i++)
	{
		print_spaces(sp - 1);
		print_character(i);

		sp--;

		_putchar('\n');
	}
}

