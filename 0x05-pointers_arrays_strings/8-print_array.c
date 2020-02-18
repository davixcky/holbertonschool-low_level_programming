#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print an array
 * @a: Array to print
 * @n: Lenght of the array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0 )
		return;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

}
