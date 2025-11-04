#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - 
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int diag1, diag2;
	int i, y;

/*diag 1*/
	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
	}
/*diag2*/
	for (y = size - 1; y >= 0; y++)
	{
		for (i = 0; i < size; i++)
			diag2 += a[i * size + y];
	}
	printf ("%d, %d\n", diag1, diag2);
}
