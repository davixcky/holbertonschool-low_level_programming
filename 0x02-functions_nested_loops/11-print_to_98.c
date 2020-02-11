#include "holberton.h"

/**
 * print_number_lower - Print the numbers lower than 0
 * @n: Is the number to print
 * Result: Nothin
 */
void print_number_lower(int n)
{
	if (n <= -10)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		n = n * -1;
		_putchar('-');
		_putchar(n + '0');
	}
}

/**
 * print_number - Print a number
 * @n: Number to print
 * Return: Nothing
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number_lower(n);
	}
}

/**
 * print_to_98 - Print to the numbers to 98
 * @n: Number n
 * Return: Return the nothing
 */
void print_to_98(int n)
{
	while (1)
	{
		if (n != 98)
		{
			print_number(n);
			_putchar(',');
			_putchar(' ');
		}

		if (n == 98)
		{
			print_number(n);
			_putchar('\n');
			break;
		}
		else if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
}

