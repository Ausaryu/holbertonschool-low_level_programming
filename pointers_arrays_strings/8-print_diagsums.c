#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - 
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	long int diag1, diag2;
	int i, y;

/*diag 1*/
	diag1 = 0;
	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
	}
/*diag2*/
	diag2 = 0;
	i = 0;
	for (y = size - 1; y >= 0 && i < size; y--)
	{
		diag2 += a[i * size + y];
		i++;
	}
	printf ("%ld, %ld\n", diag1, diag2);
}
