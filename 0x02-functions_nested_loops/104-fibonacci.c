#include <stdio.h>

/**
 * calculate_fibonacci - Calculate the fibonacci series
 */
void calculate_fibonacci(void)
{
	int counter;

	long double i, res, aux;

	i = 1;
	res = 2;

	printf("1, 2");
	for (counter = 1; counter <= 96; counter++)
	{
		aux = res + i;
		i = res;
		res = aux;

		printf(", %.0Lf", aux);
	}
	printf("\n");
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

