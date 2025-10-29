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
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (letters[j] == n[i])
			{
				n[i] = numbers[j];
				break;
			}
		}
	}
	return (n);
}
