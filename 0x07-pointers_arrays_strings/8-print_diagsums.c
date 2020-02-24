#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Sum diagonals
 * @a: Array
 * @size: Size of the array
 **/
void print_diagsums(int *a, int size)
{

	int i, size_x2, sum, times;

	size_x2 = size * size;
	sum = 0;
	for (i = 0; i < size_x2; i += size + 1)
	{
		sum += a[i];
	}

	printf("%d, ", sum);

	sum = 0;
	times = 0;
	for (i = size - 1; i < size_x2; i = size - 1 + i)
	{
		if (times != size)
			sum += a[i];

		times++;
	}

	printf("%d\n", sum);

}
