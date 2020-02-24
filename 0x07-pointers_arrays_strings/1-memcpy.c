#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory
 * @src: Memory for source
 * @n: Number of bytes to copy
 * Return: Destination memory
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

