#include <stdio.h>

/**
 * print_text - Print the text
 * @n: Number to print
 */
void print_text(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("FizzBuzz");
		return;
	}
	else if (n % 3 == 0)
	{
		printf("Fizz");
		return;
	}
	else if (n % 5 == 0)
	{
		printf("Buzz");
		return;
	}

	printf("%d", n);

}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		print_text(i + 1);
		if (i + 1 != 100)
			putchar(' ');
	}


	putchar('\n');

	return (0);
}

