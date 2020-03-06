#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_digit(char c);
long is_number(char *s);
char *multiply(char *n1, char *n2);
int size(char *str);
char *sum(char *res, char);

/**
 * main - Entry point
 * @argc: Argv length
 * @argv: Arrays of array of characters
 * Return: Return 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	char *result;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

long is_number(char *s)
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

	return (atol(s));
}

int size(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * swap - Swap two integeres
 * @a: Integer
 * @b: Integer
 */
void swap(char *a, char *b)
{
	char aux;

	aux = *a;
	*a = *b;
	*b = aux;
}


/**
 * rev_string - Reverses a string.
 * @s: String
 */
void rev_string(char *s)
{
	int i, size_s;

	if (!s)
		return;

	size_s = size(s);

	if (size_s < 2)
		return;

	for (i = 0; i < size_s / 2; i++)
	{
		swap(s + i, s + size_s - i - 1);
	}
}

char *sum(char *s, char a)
{
	*s = *s + a - 48;
	return (s);
}

char *multiply(char *n1, char *n2)
{
	char *res;
	int n1ptr, n2ptr, n1val, n2val, carry, k, aux, k_aux, aux2;

	n2ptr = size(n2) - 1;

	k = k_aux = aux2 = carry = 0;

	res = malloc(1);
	if (res == NULL)
		return (NULL);

	while(n2ptr >= 0)
	{
		n1ptr = size(n1) - 1;

		n2val = n2ptr >= 0 ? n2[n2ptr] - 48 : 0;
		k = k_aux;
		k_aux += 1;
		for (; n1ptr >= 0; n1ptr--)
		{
			aux2++;
			res = realloc(res, aux2);
			if (res == NULL)
				exit(102);

			n1val = n1ptr >= 0 ? n1[n1ptr] - 48 : 0;
			aux = n1val * n2val + carry;

			res[k] += res[k] == 0 ? (aux % 10) + 48 : (aux % 10);
			carry = aux / 10;
			k++;
		}

		n2ptr--;

	}

	rev_string(res);
	return (res);
}
