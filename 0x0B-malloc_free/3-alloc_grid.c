#include "holberton.h"
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (!width || !height)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
