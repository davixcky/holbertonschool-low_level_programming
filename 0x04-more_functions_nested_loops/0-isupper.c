#include  "holberton.h"

/**
 * _isupper - Verify if a letter is in uper case
 * @c: Letter to be verified
 * Return: 1 if is true and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}

