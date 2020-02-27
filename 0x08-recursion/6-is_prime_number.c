#include "holberton.h"
/**
 * prime - Checks if the given number is prime or not.
 * @i: Counter
 * @n: Number
 * Return: if the number is prime returns 1, otherwise 0.
 **/
int prime(int i, int n)
{
	if (n % i == 0)
	{
		if (i == n)
			return (1);
		else
			return (0);
	}
	return (prime(i + 1, n));
}
/**
 * is_prime_number - Checks if the given number is prime or not.
 * @n: Given number
 * Return: if the number is prime returns 1, otherwise 0.
 **/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (n > 2 ? prime(2, n) : 1);
}
