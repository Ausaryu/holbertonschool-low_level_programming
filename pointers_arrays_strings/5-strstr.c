#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the first occurrence of the substring
 *
 * Return: pointer to the beginning of the located substring,
 *			or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, y;

	i = 0;
	while (haystack[i] != '\0')
	{
		for (y = 0; needle[y] != '\0' && needle[y] == haystack[i + y]; y++)
		{
			if (needle[y + 1] == '\0')
				return (haystack + i);
		}
		i++;
		continue;
	}
	return (NULL);
}
