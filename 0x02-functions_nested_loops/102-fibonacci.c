#include <stdio.h>

/**
 * calculate_fibonacci - Calculate the fibonacci series
 */
void calculate_fibonacci(void)
{
	long int i, res, counter, aux;
	char c;

	i = 1;
	res = 2;

	printf("%li, %li, ", i, res);
	for (counter = 0; counter <= 47; counter++)
	{
		aux = res;
		res += i;
		i = aux;
		c = counter != 47 ? ',' : '\n';
		printf("%li%c ", res, c);
	}
}

/**
 * main - Entry point
 * Return: Return always 0
 */
int main(void)
{
	calculate_fibonacci();
	return (0);
}

