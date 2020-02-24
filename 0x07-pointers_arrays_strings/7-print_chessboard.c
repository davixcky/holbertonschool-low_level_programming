#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard
 * @matrix: Chessboard to print
 **/
void print_chessboard(char (*matrix)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(matrix + i) + j));
		}

		_putchar('\n');
	}

}

