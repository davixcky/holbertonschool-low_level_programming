#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * _isNum - checks if it is fully a number
 * @num: string to check
 * Return: 1 if all num 0 if not
 **/

int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _memset - sets first n bytes of the memory area
 * @s: array to set
 * @b: what to set it to
 * @n: first n bytes
 * Return: s
 **/

void *_memset(void *s, int b, unsigned int n)
{
	if (n)
	{
		char *d = s;

		do {
			*d++ = b;
		} while (--n);
	}
	return (s);
}

/**
 * _strlen - size of string
 * @s: string to measure
 * Return: size of string
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		++i;
	return (i);
}

/**
 * main - multiple two positive numbers, it takes two arg
 * @argc: argument count
 * @argv: number to multiply
 * prints out num
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int length, carry, prod, i, j, len1, len2;
	int *result;

	if (argc != 3 || !(_isNum(argv[1])) || !(_isNum(argv[2])))
	{
		puts("Error");
		exit(98);
	}
	len1 = _strlen(argv[1]), len2 = _strlen(argv[2]);
	length = len1 + len2;
	result = calloc(length, sizeof(int *));
	if (result == NULL)
		puts("Error"), exit(98);
	for (i = len2 - 1; i > -1; i--)
	{
		carry = 0;
		for (j = len1 - 1; j > -1; j--)
		{
			prod = (argv[2][i] - '0') * (argv[1][j] - '0');
			carry =  (prod / 10);
			result[(i + j) + 1] += (prod % 10);
			if (result[(i + j) + 1] > 9)
			{
				result[i + j] += result[(i + j) + 1] / 10;
				result[(i + j) + 1] = result[(i + j) + 1] % 10;
			}
			result[(i + j)] += carry;
		}
	}
	if (result[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < length; i++)
		printf("%d", result[i]);
	printf("\n");
	free(result);
	return (0);
}

