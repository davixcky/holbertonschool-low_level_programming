#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 * Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is locate
 **/
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
