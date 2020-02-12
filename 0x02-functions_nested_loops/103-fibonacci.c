
#include <stdio.h>

/**
 * main - Write a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded)
 * i: Integer
 * r: Result
 * Return: On success 1.
 *
 */
int main(void)
{
	int counter, i, res, aux;

	counter = 0;
	i = 1;
	aux = 2;
	res = 2;

	while (counter < 4000000)
	{
		counter = i + aux;
		i = aux;
		aux = counter;

		if (counter % 2 == 0)
			res = res + counter;
	}
	printf("%d\n", res);
	return (0);
}
