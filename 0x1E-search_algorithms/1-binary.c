#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i, middle;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			printf("%c", (i  == right) ? '\n' : ',');
		}

		middle = (left + right) / 2;

		if (array[middle] <  value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
