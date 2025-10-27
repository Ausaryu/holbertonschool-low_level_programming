#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle
 * @size: triangle size
 *
 */
void print_triangle(int size)
{
	int x, y;

	for (y = 1; y <= size ; y++)
	{
		for (x = 0; x < (size - y); x++)
		{
			_putchar(' ');
		}
		for (x = 0; x < y; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
