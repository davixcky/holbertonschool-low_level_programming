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
	int len, i;

	text = "Holberton";
	len = strlen(text);

	for (i = 0; i <= len; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}

