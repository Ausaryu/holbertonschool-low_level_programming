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
	if (s1 == NULL)
		size = 0;
	else
	{
		size = 0;
		while (s1[i] != '\0')
		{
			size++;
			i++;
		}
	}
	i = 0;
	if (s2 == NULL)
		size2 = size;
	else
	{
		size2 = size;
		while (s2[i] != '\0')
		{
			size2++;
			i++;
		}
	}

	array = malloc(size2 + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = s1[i];
	for (i = 0; i + size < size2; i++)
	{
		array[i + size] = s2[i];
	}
	array[i + size] = '\0';
	return (array);
}
