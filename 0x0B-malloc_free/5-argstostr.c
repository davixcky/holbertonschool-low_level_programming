#include "holberton.h"

/**
 * _strlen - Len of a string
 * @s: String
 * Return: Length
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: Length of av
 * @av: Array of strings
 * Return: Array of strings
 **/
char *argstostr(int ac, char **av)
{
	char *words, *aux;
	int len, i, r, c;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0, len = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;

	words = malloc(len);
	if (words == NULL)
		return (NULL);

	i = 0;
	aux = words;
	for (r = 0; r < ac; r++)
	{
		for (c = 0; av[r][c] != 0; c++)
		{
			*words = av[r][c];
			words++;
		}

		*words = '\n';
		words++;
	}

	return (aux);
}
