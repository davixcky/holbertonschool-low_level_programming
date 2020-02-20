#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @s: String
 * Return: String
 */
char *leet(char *s)
{
	char *lower_alpha, *upper_alpha, *numbers;
	int i, j;

	lower_alpha = "aeotl";
	upper_alpha = "AEOTL";
	numbers = "43071";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j <= 5; j++)
			if (s[i] == lower_alpha[j] || s[i] == upper_alpha[j])
				s[i] = numbers[j];

	return (s);
}

