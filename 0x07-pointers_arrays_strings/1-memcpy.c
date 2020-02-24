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

	for (; n > 0 && src && dest; n--, src++, dest++)
	{
		*dest = *src;
	}

	return (dest);
}

