#include "main.h"
#include <stdio.h>

/**
 * _memset - remplir une zone mémoire
 * @s: the address of memory
 * @b: the value
 * @n: the size of the memory
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
