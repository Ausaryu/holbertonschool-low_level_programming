#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the newly created array,
 * or NULL on failure or if min > max.
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; (int)i < max - min + 1; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
