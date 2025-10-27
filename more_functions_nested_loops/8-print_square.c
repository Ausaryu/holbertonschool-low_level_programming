#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 *
 *
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
