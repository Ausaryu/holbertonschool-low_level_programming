#include "main.h"
#include <stdio.h>

/**
 * leet - encode a string into 1337 5|*34|<
 * @n: the string to convert
 *
 * Return: the string converted.
 */
char *leet(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] == 'a' || n[i] == 'A')
			n[i] = '4';
		else if (n[i] == 'e' || n[i] == 'E')
			n[i] = '3';
		else if (n[i] == 'o' || n[i] == '0')
			n[i] = '0';
		else if (n[i] == 't' || n[i] == 'T')
			n[i] = '7';
		else if (n[i] == 'l' || n[i] == 'L')
			n[i] = '1';
		i++;
	}
	return (n);
}
