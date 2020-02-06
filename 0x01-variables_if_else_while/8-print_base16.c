#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= 'f'; i++)
	{
		if (i >= 58 && i <= 96)
			continue;

		putchar(i);
		if (i == 'f')
			putchar('\n');
	}
	return (0);
}

