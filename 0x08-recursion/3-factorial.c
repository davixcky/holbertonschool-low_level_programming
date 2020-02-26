#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Start number
 * Return: Return the factorial
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (factorial(n - 1) * n);

}
