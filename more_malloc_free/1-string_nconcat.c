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
	unsigned int i, size, size2;

	i = 0;
	size = 0;
	while (s1[i] != '\0')
	{
		size++;
		i++;
	}
	size2 = size;
	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}

	if (size2 > size + n)
		size2 = size + n;

	array = malloc(size2);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i + size < size2; i++)
	{
		array[i + size] = s2[i];
	}
	return (array);
}
