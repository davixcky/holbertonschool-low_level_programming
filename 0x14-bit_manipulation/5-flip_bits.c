#include "holberton.h"
#include <stdio.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter;

	for (counter = i = 0; i < 32; i++, counter++)
		if (((n >> i) & 1) == ((m >> i) & 1))
			counter--;

	return (counter);
}
