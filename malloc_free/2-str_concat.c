#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into newly allocated memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
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
