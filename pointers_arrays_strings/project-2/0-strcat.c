#include "main.h"
#include <unistd.h>

/**
 * _strcat - append a string to an other
 * @dest: the base string
 * @src: the string to append
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	dest[i] = ' ';

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
