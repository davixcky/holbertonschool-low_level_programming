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
