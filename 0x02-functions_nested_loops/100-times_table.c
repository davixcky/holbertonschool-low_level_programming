#include "holberton.h"

/**
 * print_number - Print a number
 * @n: Number that is going to be printer
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
}

/**
 * print_table - Generate a table from zero to a specific number
 * @n: Specific number
 */
void print_table(int n)
{
	int i, j, res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j == 0)
			{
				print_number(res);
			}
			else if (res >= 100)
			{
				print_number(res);
			}
			else if (res >= 10)
			{
				_putchar(' ');
				print_number(res);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				print_number(res);
			}

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}

		_putchar('\n');
	}
}

/**
 * print_times_table - Print any table
 * @n: Table to print
 * Return: Void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	print_table(n);
}

