#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * is_digit - Verify is the character its a digit
 * @c: Character
 * Return: 1 if is a digit
 **/
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * is_number - Verity is the string its a number
 * @s: String
 * Return: Number
 **/
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (!is_digit(s[i]))
		{
			printf("Error\n");
			return (0);
		}
	}

	return (atoi((s)));
}

/**
 * add - Sum two numbers
 * @s: String
 * @argc: Size of s
 * @sum: Sum
 * Return: Return the sum
 **/
char add(char **s, int argc, int *sum)
{
	int i;

	*sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (is_number(s[i]))
			*sum += is_number(s[i]);
		else
		{
			*sum = 0;
			return ('n');
		}
	}

	return ('y');
}

/**
 * main - Entry point
 * @argc: Argv length
 * @argv: Arrays of array of characters
 * Return: Return 0
 */
int main(int argc, char **argv)
{
	int aux;

	if (add(argv, argc, &aux) == 'n')
		return (1);

	printf("%d\n", aux);

	return (0);
}

