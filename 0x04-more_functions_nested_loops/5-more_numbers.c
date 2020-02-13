#include "holberton.h"


/**
 * print_numbers2 - Print numbers from 0 to 14
 */
void print_numbers2(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar(i / 10 + '0');
		}

		_putchar(i % 10 + '0');
	}

	_putchar('\n');
}


/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_numbers2();
	}

}

