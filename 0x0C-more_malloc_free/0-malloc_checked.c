#include "holberton.h"

/**
 * malloc_checked - Allocates memory
 * @b: Numbers of bytes
 * Return: Pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

