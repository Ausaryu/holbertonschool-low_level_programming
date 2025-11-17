#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp does not return 0,
 *         or -1 if no match is found or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < (unsigned int)size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
