#include <stdio.h>
#include <stdlib.h>

int calculate(int number)
{
	int cents[] = {25, 10, 5, 2, 1};
	int n_coins, i;

	i = n_coins = 0;
	while(1)
	{
		if (number <= 0)
			break;

		if (number >= cents[i])
		{
			number -= cents[i];
			n_coins++;
			continue;
		}

		i++;
	}

	return (n_coins);
}

int main(int argc, char **argv)
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", calculate(number));

	return (0);
}

