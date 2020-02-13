#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long n, div;

	n = 612852475143;

	for (div = 2; div < n; div++)
	{
		while (n % div == 0)
		{
			n = n / div;
		}
	}
	printf("%lu", div);
	printf("\n");
	return (0);
}

