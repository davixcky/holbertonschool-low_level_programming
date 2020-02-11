#include <stdio.h>

void add_multiples(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
}

int main(void)
{
	add_multiples();

	return (0);
}

