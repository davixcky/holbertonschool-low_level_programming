#include "holberton.h"

/**
 * puts2 - Print each 2 pos
 * @str: String to print
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}
	_putchar('\n');

}

