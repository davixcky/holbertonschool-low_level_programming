#include <stdio.h>

/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i == j)
				continue;

			if (i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
