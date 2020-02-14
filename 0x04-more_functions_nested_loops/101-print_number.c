#include "holberton.h"
/**
 * reversDigits - Revers a number
 * @num: Number to revers
 * Return: Number reversed
 */
int reversDigits(int num)
{
	int rev_num;

	rev_num = 0;
	while (num > 0)
	{
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return (rev_num);
}

/**
 * print_number - Print a integer
 * @n: Number
 */
void print_number(int n)
{
	unsigned int  dig;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	n = reversDigits(n);


	while (n > 0)
	{
		dig = n % 10;
		_putchar(dig + 48);
		n = n / 10;
	}

}
