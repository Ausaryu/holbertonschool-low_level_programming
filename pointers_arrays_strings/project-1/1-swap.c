#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first int to swap
 * @b: second int to swap
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
