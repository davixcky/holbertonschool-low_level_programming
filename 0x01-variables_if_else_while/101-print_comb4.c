#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x == 55 && y == x + 1 && z == y + 1)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

