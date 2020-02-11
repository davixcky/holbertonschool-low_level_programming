#include "holberton.h"

/**
 * times_table - Show the multiplication tables
 * Return: Return nothing
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (res >= 10)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}

		_putchar('\n');
	}
}

