#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - Print buffer
 * @b: Char
 * @size: Integer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10; j += 2)
			{
				if (i + j < size)
					printf("%02x%02x ", b[i + j], b[i + j + 1]);
				else
					printf("     ");
			}
			for (j = 0; j < 10 && i + j < size; j++)
			{
				if (b[i + j] < 32)
					printf(".");
				else
					printf("%c", b[i + j]);
			}
			printf("\n");
		}
	}
}
