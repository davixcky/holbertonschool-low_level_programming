#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	int ld = n % 10;

	char *message;

	if (ld > 5)
		message = "and is greater than 5";
	else if (ld == 0)
		message = "and is 0";
	else if (ld < 6 && ld != 0)
		message = "and is less than 6 and not 0";

	printf("Last digit of %d is %d %s\n", n, ld, message);
}
