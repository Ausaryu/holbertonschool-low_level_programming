#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to allocated memory, or NULL on failure or invalid size.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		alloc[i] = 0;
	}

	return (alloc);
}
