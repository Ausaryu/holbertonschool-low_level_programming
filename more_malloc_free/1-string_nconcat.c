#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at most n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes of s2 to concatenate.
 *
 * Return: Pointer to newly allocated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, size, size2, size_total;

	i = 0;
	size = 0, size2 = 0;
	if (s1 != NULL)
		while (s1[size] != '\0')
			size++;

	i = 0;
	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;

	size_total = size + size2;
	if (size_total > size + n)
		size_total = size + n;

	array = malloc(size_total + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = s1[i];

	for (i = 0; i + size < size_total; i++)
		array[i + size] = s2[i];

	array[size_total] = '\0';
	return (array);
}
