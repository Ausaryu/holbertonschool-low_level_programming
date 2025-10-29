#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters
 *of a string to uppercase
 * @n: the string to convert
 *
 * Return: the string fixed.
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
		i++;
	}

	return (n);
}

