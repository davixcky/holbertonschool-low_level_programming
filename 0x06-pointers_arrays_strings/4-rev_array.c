#include "holberton.h"

/**
 * swap_int - Swap two integeres
 * @a: Integer
 * @b: Integer
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/**
 * reverse_array - Reverses an array
 * @a: Array
 * @n: Length of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap_int(a + i, a + n - i - 1);
	}
}
