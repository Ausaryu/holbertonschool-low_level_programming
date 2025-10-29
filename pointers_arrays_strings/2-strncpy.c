#include "main.h"
#include <unistd.h>

/**
 * _strncpy - copy a string to an other
 * @dest: the base string
 * @src: the string to append
 * @n: number of characters copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
