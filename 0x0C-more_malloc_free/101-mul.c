#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_digit(char c);
int is_number(char *s);

/**
 * main - Entry point
 * @argc: Argv length
 * @argv: Arrays of array of characters
 * Return: Return 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", is_number(argv[2]) * is_number(argv[1]));

	return (0);
}

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int is_number(char *s)
{
	int i;
	for (i = 0; s[i]; i++)
	{
		if (!is_digit(s[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (atoi(s));
}
