#include "holberton.h"
#include <stdio.h>

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
			printf("%d, ", n);
		}

		if (n == 98)
		{
			printf("%d\n", n);
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

