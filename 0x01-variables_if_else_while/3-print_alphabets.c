#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 'a';
	j = 'z';

	for (; i <= j; i++)
	{
		putchar(i);

		if (i == 122)
		{
			i = 64;
			j = 'Z';
		}

		if (i == 'Z')
			putchar('\n');
	}
	return (0);
}
