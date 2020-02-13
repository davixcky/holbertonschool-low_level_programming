#include <stdio.h>
#define N 1000000000

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long a, b, r, i, a1, a2, b1, b2, r1, r2;

	a = 1;
	b = 2;
	r = a + b;

	printf("%lu, %lu, ", a, b);
	for (i = 0; i < 86; i++)
	{
		printf("%lu, ", r);
		a = b;
		b = r;
		r = a + b;
	}

	b1 = b / N;
	b2 = b % N;
	r1 = r / N;
	r2 = r % N;

	for (i = 0; i < 9; i++)
	{
		printf("%lu%lu, ", r1, r2);
		a1 = b1;
		a2 = b2;
		b1 = r1;
		b2 = r2;

		r1 = a1 + b1 + (a2 + b2) / N;
		r2 = (a2 + b2) % N;
	}

	printf("%lu%lu\n", r1, r2);


	return (0);
}

