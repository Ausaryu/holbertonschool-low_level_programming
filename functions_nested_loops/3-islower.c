#include <stdio.h>
#include "main.h"

/**
 *_islower - ouais
 *@c: the character to check
 *Return: soit 1 ou 0
 */
int _islower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}
