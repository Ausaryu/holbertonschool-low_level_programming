#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the set bytes
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 *	or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, y;
	int isgood = 0;

	i = 0;
	while (s[i] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				isgood = 1;
				break;
			}
		}
		if (isgood == 0)
		{
			i++;
			continue;
		}
		break;
	}
	if (isgood == 0)
		return (NULL);
	return (s + i);
}
