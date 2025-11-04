#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the character to accept
 * Return:  the number of bytes in the initial segment of s
 *			which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
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
		if (isgood == 1)
		{
			i++;
			isgood = 0;
			continue;
		}
		break;
	}
	return (i);
}
