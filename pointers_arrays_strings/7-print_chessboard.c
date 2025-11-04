#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the 2D chessboard
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			write(1, &a[i][j], 1);
		}
		write(1, "\n", 1);
	}
}
