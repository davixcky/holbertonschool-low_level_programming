#include "holberton.h"
/**
 * digits - Numbers digits of a number
 * @n: Number
 * Return: Digits
 */
unsigned int digits(unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}

	return (i);
}

/**
 * pow_x10 - Custom pow
 * @exponent: Exponent number
 * Return: Return the divisor
 */
unsigned int pow_x10(unsigned int exponent)
{
	unsigned int res, i;

	res = 1;
	for (i = 1; i < exponent; i++)
	{
		res *= 10;
	}

	return (res);
}
/**
 * print_number - Print a number
 * @n: Number
 */
void print_number(int n)
{
	unsigned int div, aux, dig;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		aux = -n;
		_putchar('-');
	} else
	{
		aux = n;
	}

	dig = digits(aux);
	div = pow_x10(dig);
	while (aux > 0)
	{
		_putchar(aux / div + 48);
		aux = aux % div;
		div = div / 10;
		dig--;

		if (aux == 0 && dig == 1)
			_putchar('0');
	}

}

