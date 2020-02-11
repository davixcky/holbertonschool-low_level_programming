#include "holberton.h"

/**
 * print_last_digit - Print the last digit
 * @n: Number that is going to be splited
 * Return: Return the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
		ld = ld * -1;

	_putchar(ld + '0');

	return (ld);
}

