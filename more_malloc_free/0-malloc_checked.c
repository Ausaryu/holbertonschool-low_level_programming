#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory.
 *         Terminates process with status 98 on failure.
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);
	return (alloc);
}
