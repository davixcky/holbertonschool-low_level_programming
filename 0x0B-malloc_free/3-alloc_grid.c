#include "holberton.h"
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **arr;

	if (!width || !height)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	for (int i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
