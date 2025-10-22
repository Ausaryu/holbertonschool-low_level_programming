#include <stdio.h>
#include "main.h"

/**
 *_isalpha - ouais
 *@c: the character to check
 *Return: soit 1 ou 0
 */
int _isalpha(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}
