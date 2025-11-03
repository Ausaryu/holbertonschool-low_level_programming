#include "main.h"
#include <unistd.h>

/**
 * _strncat - append a string to an other
 * @dest: the base string
 * @src: the string to append
 * @n: number of characters copied from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
