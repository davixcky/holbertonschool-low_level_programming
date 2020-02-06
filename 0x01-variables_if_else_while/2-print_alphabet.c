#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		if (i == 'z')
			putchar('\n');
	}

	return (0);
}
