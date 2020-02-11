#include "holberton.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	char *text;
	int i;

	text = "Holberton\n";

	for (i = 0; i <= 9; i++)
	{
		_putchar(text[i]);
	}


	return (0);
}

